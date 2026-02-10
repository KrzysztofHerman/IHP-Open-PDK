GCMG_FLAGS = -I $(shell gnucap-conf --includedir) -I models -I ../verilog-a/r3_cmc
GNUCAP_CPPFLAGS = $(shell gnucap-conf --cppflags) ${CPPFLAGS}
GNUCAP_CXXFLAGS = $(shell gnucap-conf --cxxflags) -fPIC -shared ${CXXFLAGS}
SPAKCONVERT = `which spak-convert`
SPAKFLAGS = --va-include ../verilog-a/psp103/psp103_nqs.va \
			--va-include ../verilog-a/r3_cmc/r3_cmc.va \
			--va-include ../verilog-a/mosvar/mosvar.va \
			--va-include models/capacitor.va \
			--va-include models/bjt.va \
			--va-include models/vbic_4T_et_cf.va

# Default target
all: plugins/sp_capacitor.so \
	 plugins/sp_resistor.so \
	 plugins/sp_inductor.so \
	 plugins/cap_rfcmim.so \
	 plugins/cornerRES_typ.so \
	 plugins/cornerRES_bcs.so \
	 plugins/cornerRES_wcs.so \
	 plugins/cornerRES_stat.so \
	 plugins/cornerCAP_typ.so \
	 plugins/cornerCAP_bcs.so \
	 plugins/cornerCAP_wcs.so \
	 plugins/cornerCAP_stat.so \
	 plugins/resistors_paramsets.so \
	 plugins/resistors_paramsets_stat.so \
	 plugins/resistors_stat.so \
	 plugins/capacitors_paramsets.so \
	 plugins/capacitors_paramsets_stat.so \
	 plugins/capacitors_stat.so

# Shared library targets
plugins/%.so: plugins/%.cc
	$(CXX) $(GNUCAP_CPPFLAGS) $(GNUCAP_CXXFLAGS) $< -o $@

# C++ file generation
plugins/sp_capacitor.cc: models/capacitor.va
	gnucap-mg-vams $(GCMG_FLAGS) -o $@ --cc $<

plugins/sp_resistor.cc: models/resistor.va
	gnucap-mg-vams $(GCMG_FLAGS) -o $@ --cc $<

plugins/sp_inductor.cc: models/inductor.va
	gnucap-mg-vams $(GCMG_FLAGS) -o $@ --cc $<

plugins/cap_rfcmim.cc: models/new.va
	gnucap-mg-vams $(GCMG_FLAGS) -o $@ --cc $<

plugins/resistors_paramsets.cc: models/resistors_paramsets.vams
	gnucap-mg-vams $(GCMG_FLAGS) -D res_rpara=1.0 -D res_rarea=1.0 \
		-D rsh_rsil=7.0 -D rsh_rppd=260.0 -D rsh_rhigh=1360 \
		-o $@ --cc $<

plugins/capacitors_paramsets.cc: models/capacitors_paramsets.vams
	gnucap-mg-vams $(GCMG_FLAGS) -D cap_cpara=1.0 -D cap_carea=1.5E-15 \
		-o $@ --cc $<

plugins/cornerCAP_%.cc: models/cornerCAP.vams
	gnucap-mg-vams $(GCMG_FLAGS) -D cap_$* -o $@ --cc $<

plugins/cornerRES_%.cc: models/cornerRES.vams
	gnucap-mg-vams $(GCMG_FLAGS) -D res_$* -o $@ --cc $<

plugins/%.cc: models/%.vams
	gnucap-mg-vams $(GCMG_FLAGS) -o $@ --cc $<

# va generation (only when REGENERATE_VA=1 is set)
ifdef REGENERATE_VA
models/%.va: ../xyce/models/%.lib
	$(SPAKCONVERT) $< $@ --input-simulator xyce --output-simulator gnucap $(SPAKFLAGS)
endif

.PHONY: clean distclean stat

# Remove build artifacts only
clean:
	rm -f plugins/*.cc plugins/*.so

# Remove build artifacts and generated .va files that can be regenerated from .lib files
distclean: clean
	rm -f models/corner*.va \
	      models/capacitors_*.va \
	      models/resistors_*.va \
	      models/sg13g2_hbt_*.va \
	      models/sg13g2_moshv_*.va \
	      models/sg13g2_moslv_*.va
