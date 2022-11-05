#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x5d2cb0d0, "mipi_dsi_driver_unregister" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0x8d9f65f9, "dp_aux_dp_driver_unregister" },
	{ 0x7945539c, "mipi_dsi_driver_register_full" },
	{ 0xe74c18b0, "__dp_aux_dp_driver_register" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0xe3c8217, "mipi_dsi_attach" },
	{ 0x818880ec, "of_match_node" },
	{ 0xe57ceb1e, "drm_panel_dp_aux_backlight" },
	{ 0xc2ea4a2d, "drm_panel_add" },
	{ 0x1bd4b125, "drm_panel_of_backlight" },
	{ 0x4045b10f, "drm_panel_init" },
	{ 0xc20cc8d8, "pm_runtime_set_autosuspend_delay" },
	{ 0x98889996, "pm_runtime_enable" },
	{ 0x5bd1724b, "of_node_put" },
	{ 0x7628a698, "of_find_i2c_adapter_by_node" },
	{ 0xc08f6533, "of_parse_phandle" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0xe201ffb8, "devm_regulator_get" },
	{ 0xe536ac87, "of_find_property" },
	{ 0xad885165, "drm_bus_flags_from_videomode" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0x70cc1bf1, "of_get_display_timing" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x3a760923, "gpiod_get_value_cansleep" },
	{ 0xd769d20f, "regulator_enable" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0x7baafe, "drm_mode_create" },
	{ 0x31118ae8, "drm_display_info_set_bus_formats" },
	{ 0x3fc5e10c, "drm_get_edid" },
	{ 0x95069563, "drm_mode_probed_add" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0x6069016c, "drm_mode_duplicate" },
	{ 0xd929e5d5, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xba5a062, "drm_add_edid_modes" },
	{ 0x2a6ac568, "__pm_runtime_resume" },
	{ 0x37a0cba, "kfree" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3967f406, "regulator_disable" },
	{ 0xfd389cbc, "gpiod_set_value_cansleep" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x66cf2f64, "drm_display_mode_from_videomode" },
	{ 0xa1d8004a, "videomode_from_timing" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xf2483d51, "mipi_dsi_detach" },
	{ 0x81822a88, "put_device" },
	{ 0x76685e8a, "__pm_runtime_disable" },
	{ 0x24a741fd, "__pm_runtime_use_autosuspend" },
	{ 0xa9ee3d0, "drm_panel_remove" },
	{ 0xca86d3c9, "drm_panel_unprepare" },
	{ 0x64ce4aaa, "drm_panel_disable" },
};

MODULE_INFO(depends, "drm_dp_aux_bus,drm_kms_helper,drm");

MODULE_ALIAS("of:N*T*Cauo,b080uan01");
MODULE_ALIAS("of:N*T*Cauo,b080uan01C*");
MODULE_ALIAS("of:N*T*Cboe,tv080wum-nl0");
MODULE_ALIAS("of:N*T*Cboe,tv080wum-nl0C*");
MODULE_ALIAS("of:N*T*Clg,ld070wx3-sl01");
MODULE_ALIAS("of:N*T*Clg,ld070wx3-sl01C*");
MODULE_ALIAS("of:N*T*Clg,lh500wx1-sd03");
MODULE_ALIAS("of:N*T*Clg,lh500wx1-sd03C*");
MODULE_ALIAS("of:N*T*Cpanasonic,vvx10f004b00");
MODULE_ALIAS("of:N*T*Cpanasonic,vvx10f004b00C*");
MODULE_ALIAS("of:N*T*Clg,acx467akm-7");
MODULE_ALIAS("of:N*T*Clg,acx467akm-7C*");
MODULE_ALIAS("of:N*T*Cosddisplays,osd101t2045-53ts");
MODULE_ALIAS("of:N*T*Cosddisplays,osd101t2045-53tsC*");
MODULE_ALIAS("of:N*T*Campire,am-1280800n3tzqw-t00h");
MODULE_ALIAS("of:N*T*Campire,am-1280800n3tzqw-t00hC*");
MODULE_ALIAS("of:N*T*Campire,am-480272h3tmqw-t01h");
MODULE_ALIAS("of:N*T*Campire,am-480272h3tmqw-t01hC*");
MODULE_ALIAS("of:N*T*Campire,am800480r3tmqwa1h");
MODULE_ALIAS("of:N*T*Campire,am800480r3tmqwa1hC*");
MODULE_ALIAS("of:N*T*Carm,rtsm-display");
MODULE_ALIAS("of:N*T*Carm,rtsm-displayC*");
MODULE_ALIAS("of:N*T*Carmadeus,st0700-adapt");
MODULE_ALIAS("of:N*T*Carmadeus,st0700-adaptC*");
MODULE_ALIAS("of:N*T*Cauo,b101aw03");
MODULE_ALIAS("of:N*T*Cauo,b101aw03C*");
MODULE_ALIAS("of:N*T*Cauo,b101ean01");
MODULE_ALIAS("of:N*T*Cauo,b101ean01C*");
MODULE_ALIAS("of:N*T*Cauo,b101xtn01");
MODULE_ALIAS("of:N*T*Cauo,b101xtn01C*");
MODULE_ALIAS("of:N*T*Cauo,b116xa01");
MODULE_ALIAS("of:N*T*Cauo,b116xa01C*");
MODULE_ALIAS("of:N*T*Cauo,b116xw03");
MODULE_ALIAS("of:N*T*Cauo,b116xw03C*");
MODULE_ALIAS("of:N*T*Cauo,b133han05");
MODULE_ALIAS("of:N*T*Cauo,b133han05C*");
MODULE_ALIAS("of:N*T*Cauo,b133htn01");
MODULE_ALIAS("of:N*T*Cauo,b133htn01C*");
MODULE_ALIAS("of:N*T*Cauo,b140han06");
MODULE_ALIAS("of:N*T*Cauo,b140han06C*");
MODULE_ALIAS("of:N*T*Cauo,b133xtn01");
MODULE_ALIAS("of:N*T*Cauo,b133xtn01C*");
MODULE_ALIAS("of:N*T*Cauo,g070vvn01");
MODULE_ALIAS("of:N*T*Cauo,g070vvn01C*");
MODULE_ALIAS("of:N*T*Cauo,g101evn010");
MODULE_ALIAS("of:N*T*Cauo,g101evn010C*");
MODULE_ALIAS("of:N*T*Cauo,g104sn02");
MODULE_ALIAS("of:N*T*Cauo,g104sn02C*");
MODULE_ALIAS("of:N*T*Cauo,g121ean01");
MODULE_ALIAS("of:N*T*Cauo,g121ean01C*");
MODULE_ALIAS("of:N*T*Cauo,g133han01");
MODULE_ALIAS("of:N*T*Cauo,g133han01C*");
MODULE_ALIAS("of:N*T*Cauo,g156xtn01");
MODULE_ALIAS("of:N*T*Cauo,g156xtn01C*");
MODULE_ALIAS("of:N*T*Cauo,g185han01");
MODULE_ALIAS("of:N*T*Cauo,g185han01C*");
MODULE_ALIAS("of:N*T*Cauo,g190ean01");
MODULE_ALIAS("of:N*T*Cauo,g190ean01C*");
MODULE_ALIAS("of:N*T*Cauo,p320hvn03");
MODULE_ALIAS("of:N*T*Cauo,p320hvn03C*");
MODULE_ALIAS("of:N*T*Cauo,t215hvn01");
MODULE_ALIAS("of:N*T*Cauo,t215hvn01C*");
MODULE_ALIAS("of:N*T*Cavic,tm070ddh03");
MODULE_ALIAS("of:N*T*Cavic,tm070ddh03C*");
MODULE_ALIAS("of:N*T*Cbananapi,s070wv20-ct16");
MODULE_ALIAS("of:N*T*Cbananapi,s070wv20-ct16C*");
MODULE_ALIAS("of:N*T*Cboe,hv070wsa-100");
MODULE_ALIAS("of:N*T*Cboe,hv070wsa-100C*");
MODULE_ALIAS("of:N*T*Cboe,nv101wxmn51");
MODULE_ALIAS("of:N*T*Cboe,nv101wxmn51C*");
MODULE_ALIAS("of:N*T*Cboe,nv110wtm-n61");
MODULE_ALIAS("of:N*T*Cboe,nv110wtm-n61C*");
MODULE_ALIAS("of:N*T*Cboe,nv133fhm-n61");
MODULE_ALIAS("of:N*T*Cboe,nv133fhm-n61C*");
MODULE_ALIAS("of:N*T*Cboe,nv133fhm-n62");
MODULE_ALIAS("of:N*T*Cboe,nv133fhm-n62C*");
MODULE_ALIAS("of:N*T*Cboe,nv140fhmn49");
MODULE_ALIAS("of:N*T*Cboe,nv140fhmn49C*");
MODULE_ALIAS("of:N*T*Ccdtech,s043wq26h-ct7");
MODULE_ALIAS("of:N*T*Ccdtech,s043wq26h-ct7C*");
MODULE_ALIAS("of:N*T*Ccdtech,s070pws19hp-fc21");
MODULE_ALIAS("of:N*T*Ccdtech,s070pws19hp-fc21C*");
MODULE_ALIAS("of:N*T*Ccdtech,s070swv29hg-dc44");
MODULE_ALIAS("of:N*T*Ccdtech,s070swv29hg-dc44C*");
MODULE_ALIAS("of:N*T*Ccdtech,s070wv95-ct16");
MODULE_ALIAS("of:N*T*Ccdtech,s070wv95-ct16C*");
MODULE_ALIAS("of:N*T*Cchefree,ch101olhlwh-002");
MODULE_ALIAS("of:N*T*Cchefree,ch101olhlwh-002C*");
MODULE_ALIAS("of:N*T*Cchunghwa,claa070wp03xg");
MODULE_ALIAS("of:N*T*Cchunghwa,claa070wp03xgC*");
MODULE_ALIAS("of:N*T*Cchunghwa,claa101wa01a");
MODULE_ALIAS("of:N*T*Cchunghwa,claa101wa01aC*");
MODULE_ALIAS("of:N*T*Cchunghwa,claa101wb01");
MODULE_ALIAS("of:N*T*Cchunghwa,claa101wb01C*");
MODULE_ALIAS("of:N*T*Cdataimage,scf0700c48ggu18");
MODULE_ALIAS("of:N*T*Cdataimage,scf0700c48ggu18C*");
MODULE_ALIAS("of:N*T*Cdlc,dlc0700yzg-1");
MODULE_ALIAS("of:N*T*Cdlc,dlc0700yzg-1C*");
MODULE_ALIAS("of:N*T*Cdlc,dlc1010gig");
MODULE_ALIAS("of:N*T*Cdlc,dlc1010gigC*");
MODULE_ALIAS("of:N*T*Cedt,et035012dm6");
MODULE_ALIAS("of:N*T*Cedt,et035012dm6C*");
MODULE_ALIAS("of:N*T*Cedt,etm0350g0dh6");
MODULE_ALIAS("of:N*T*Cedt,etm0350g0dh6C*");
MODULE_ALIAS("of:N*T*Cedt,etm043080dh6gp");
MODULE_ALIAS("of:N*T*Cedt,etm043080dh6gpC*");
MODULE_ALIAS("of:N*T*Cedt,etm0430g0dh6");
MODULE_ALIAS("of:N*T*Cedt,etm0430g0dh6C*");
MODULE_ALIAS("of:N*T*Cedt,et057090dhu");
MODULE_ALIAS("of:N*T*Cedt,et057090dhuC*");
MODULE_ALIAS("of:N*T*Cedt,et070080dh6");
MODULE_ALIAS("of:N*T*Cedt,et070080dh6C*");
MODULE_ALIAS("of:N*T*Cedt,etm0700g0dh6");
MODULE_ALIAS("of:N*T*Cedt,etm0700g0dh6C*");
MODULE_ALIAS("of:N*T*Cedt,etm0700g0bdh6");
MODULE_ALIAS("of:N*T*Cedt,etm0700g0bdh6C*");
MODULE_ALIAS("of:N*T*Cedt,etm0700g0edh6");
MODULE_ALIAS("of:N*T*Cedt,etm0700g0edh6C*");
MODULE_ALIAS("of:N*T*Cedt,etmv570g2dhu");
MODULE_ALIAS("of:N*T*Cedt,etmv570g2dhuC*");
MODULE_ALIAS("of:N*T*Ceink,vb3300-kca");
MODULE_ALIAS("of:N*T*Ceink,vb3300-kcaC*");
MODULE_ALIAS("of:N*T*Cevervision,vgg804821");
MODULE_ALIAS("of:N*T*Cevervision,vgg804821C*");
MODULE_ALIAS("of:N*T*Cfoxlink,fl500wvr00-a0t");
MODULE_ALIAS("of:N*T*Cfoxlink,fl500wvr00-a0tC*");
MODULE_ALIAS("of:N*T*Cfrida,frd350h54004");
MODULE_ALIAS("of:N*T*Cfrida,frd350h54004C*");
MODULE_ALIAS("of:N*T*Cfriendlyarm,hd702e");
MODULE_ALIAS("of:N*T*Cfriendlyarm,hd702eC*");
MODULE_ALIAS("of:N*T*Cgeekworm,mzp280");
MODULE_ALIAS("of:N*T*Cgeekworm,mzp280C*");
MODULE_ALIAS("of:N*T*Cgiantplus,gpg482739qs5");
MODULE_ALIAS("of:N*T*Cgiantplus,gpg482739qs5C*");
MODULE_ALIAS("of:N*T*Cgiantplus,gpm940b0");
MODULE_ALIAS("of:N*T*Cgiantplus,gpm940b0C*");
MODULE_ALIAS("of:N*T*Channstar,hsd070pww1");
MODULE_ALIAS("of:N*T*Channstar,hsd070pww1C*");
MODULE_ALIAS("of:N*T*Channstar,hsd100pxn1");
MODULE_ALIAS("of:N*T*Channstar,hsd100pxn1C*");
MODULE_ALIAS("of:N*T*Chit,tx23d38vm0caa");
MODULE_ALIAS("of:N*T*Chit,tx23d38vm0caaC*");
MODULE_ALIAS("of:N*T*Cinnolux,at043tn24");
MODULE_ALIAS("of:N*T*Cinnolux,at043tn24C*");
MODULE_ALIAS("of:N*T*Cinnolux,at056tn53v1");
MODULE_ALIAS("of:N*T*Cinnolux,at056tn53v1C*");
MODULE_ALIAS("of:N*T*Cinnolux,at070tn92");
MODULE_ALIAS("of:N*T*Cinnolux,at070tn92C*");
MODULE_ALIAS("of:N*T*Cinnolux,g070y2-l01");
MODULE_ALIAS("of:N*T*Cinnolux,g070y2-l01C*");
MODULE_ALIAS("of:N*T*Cinnolux,g101ice-l01");
MODULE_ALIAS("of:N*T*Cinnolux,g101ice-l01C*");
MODULE_ALIAS("of:N*T*Cinnolux,g121i1-l01");
MODULE_ALIAS("of:N*T*Cinnolux,g121i1-l01C*");
MODULE_ALIAS("of:N*T*Cinnolux,g121x1-l03");
MODULE_ALIAS("of:N*T*Cinnolux,g121x1-l03C*");
MODULE_ALIAS("of:N*T*Cinnolux,n116bca-ea1");
MODULE_ALIAS("of:N*T*Cinnolux,n116bca-ea1C*");
MODULE_ALIAS("of:N*T*Cinnolux,n116bge");
MODULE_ALIAS("of:N*T*Cinnolux,n116bgeC*");
MODULE_ALIAS("of:N*T*Cinnolux,n125hce-gn1");
MODULE_ALIAS("of:N*T*Cinnolux,n125hce-gn1C*");
MODULE_ALIAS("of:N*T*Cinnolux,n156bge-l21");
MODULE_ALIAS("of:N*T*Cinnolux,n156bge-l21C*");
MODULE_ALIAS("of:N*T*Cinnolux,p120zdg-bf1");
MODULE_ALIAS("of:N*T*Cinnolux,p120zdg-bf1C*");
MODULE_ALIAS("of:N*T*Cinnolux,zj070na-01p");
MODULE_ALIAS("of:N*T*Cinnolux,zj070na-01pC*");
MODULE_ALIAS("of:N*T*Civo,m133nwf4-r0");
MODULE_ALIAS("of:N*T*Civo,m133nwf4-r0C*");
MODULE_ALIAS("of:N*T*Ckingdisplay,kd116n21-30nv-a010");
MODULE_ALIAS("of:N*T*Ckingdisplay,kd116n21-30nv-a010C*");
MODULE_ALIAS("of:N*T*Ckoe,tx14d24vm1bpa");
MODULE_ALIAS("of:N*T*Ckoe,tx14d24vm1bpaC*");
MODULE_ALIAS("of:N*T*Ckoe,tx26d202vm0bwa");
MODULE_ALIAS("of:N*T*Ckoe,tx26d202vm0bwaC*");
MODULE_ALIAS("of:N*T*Ckoe,tx31d200vm0baa");
MODULE_ALIAS("of:N*T*Ckoe,tx31d200vm0baaC*");
MODULE_ALIAS("of:N*T*Ckyo,tcg121xglp");
MODULE_ALIAS("of:N*T*Ckyo,tcg121xglpC*");
MODULE_ALIAS("of:N*T*Clemaker,bl035-rgb-002");
MODULE_ALIAS("of:N*T*Clemaker,bl035-rgb-002C*");
MODULE_ALIAS("of:N*T*Clg,lb070wv8");
MODULE_ALIAS("of:N*T*Clg,lb070wv8C*");
MODULE_ALIAS("of:N*T*Clg,lp079qx1-sp0v");
MODULE_ALIAS("of:N*T*Clg,lp079qx1-sp0vC*");
MODULE_ALIAS("of:N*T*Clg,lp097qx1-spa1");
MODULE_ALIAS("of:N*T*Clg,lp097qx1-spa1C*");
MODULE_ALIAS("of:N*T*Clg,lp120up1");
MODULE_ALIAS("of:N*T*Clg,lp120up1C*");
MODULE_ALIAS("of:N*T*Clg,lp129qe");
MODULE_ALIAS("of:N*T*Clg,lp129qeC*");
MODULE_ALIAS("of:N*T*Clogicpd,type28");
MODULE_ALIAS("of:N*T*Clogicpd,type28C*");
MODULE_ALIAS("of:N*T*Clogictechno,lt161010-2nhc");
MODULE_ALIAS("of:N*T*Clogictechno,lt161010-2nhcC*");
MODULE_ALIAS("of:N*T*Clogictechno,lt161010-2nhr");
MODULE_ALIAS("of:N*T*Clogictechno,lt161010-2nhrC*");
MODULE_ALIAS("of:N*T*Clogictechno,lt170410-2whc");
MODULE_ALIAS("of:N*T*Clogictechno,lt170410-2whcC*");
MODULE_ALIAS("of:N*T*Clogictechno,lttd800480070-l6wh-rt");
MODULE_ALIAS("of:N*T*Clogictechno,lttd800480070-l6wh-rtC*");
MODULE_ALIAS("of:N*T*Cmitsubishi,aa070mc01-ca1");
MODULE_ALIAS("of:N*T*Cmitsubishi,aa070mc01-ca1C*");
MODULE_ALIAS("of:N*T*Cmulti-inno,mi1010ait-1cp");
MODULE_ALIAS("of:N*T*Cmulti-inno,mi1010ait-1cpC*");
MODULE_ALIAS("of:N*T*Cnec,nl12880bc20-05");
MODULE_ALIAS("of:N*T*Cnec,nl12880bc20-05C*");
MODULE_ALIAS("of:N*T*Cnec,nl4827hc19-05b");
MODULE_ALIAS("of:N*T*Cnec,nl4827hc19-05bC*");
MODULE_ALIAS("of:N*T*Cnetron-dy,e231732");
MODULE_ALIAS("of:N*T*Cnetron-dy,e231732C*");
MODULE_ALIAS("of:N*T*Cneweast,wjfh116008a");
MODULE_ALIAS("of:N*T*Cneweast,wjfh116008aC*");
MODULE_ALIAS("of:N*T*Cnewhaven,nhd-4.3-480272ef-atxl");
MODULE_ALIAS("of:N*T*Cnewhaven,nhd-4.3-480272ef-atxlC*");
MODULE_ALIAS("of:N*T*Cnlt,nl192108ac18-02d");
MODULE_ALIAS("of:N*T*Cnlt,nl192108ac18-02dC*");
MODULE_ALIAS("of:N*T*Cnvd,9128");
MODULE_ALIAS("of:N*T*Cnvd,9128C*");
MODULE_ALIAS("of:N*T*Cokaya,rs800480t-7x0gp");
MODULE_ALIAS("of:N*T*Cokaya,rs800480t-7x0gpC*");
MODULE_ALIAS("of:N*T*Colimex,lcd-olinuxino-43-ts");
MODULE_ALIAS("of:N*T*Colimex,lcd-olinuxino-43-tsC*");
MODULE_ALIAS("of:N*T*Contat,yx700wv03");
MODULE_ALIAS("of:N*T*Contat,yx700wv03C*");
MODULE_ALIAS("of:N*T*Cortustech,com37h3m05dtc");
MODULE_ALIAS("of:N*T*Cortustech,com37h3m05dtcC*");
MODULE_ALIAS("of:N*T*Cortustech,com37h3m99dtc");
MODULE_ALIAS("of:N*T*Cortustech,com37h3m99dtcC*");
MODULE_ALIAS("of:N*T*Cortustech,com43h4m85ulc");
MODULE_ALIAS("of:N*T*Cortustech,com43h4m85ulcC*");
MODULE_ALIAS("of:N*T*Cosddisplays,osd070t1718-19ts");
MODULE_ALIAS("of:N*T*Cosddisplays,osd070t1718-19tsC*");
MODULE_ALIAS("of:N*T*Cpda,91-00156-a0");
MODULE_ALIAS("of:N*T*Cpda,91-00156-a0C*");
MODULE_ALIAS("of:N*T*Cpowertip,ph800480t013-idf02");
MODULE_ALIAS("of:N*T*Cpowertip,ph800480t013-idf02C*");
MODULE_ALIAS("of:N*T*Cqiaodian,qd43003c0-40");
MODULE_ALIAS("of:N*T*Cqiaodian,qd43003c0-40C*");
MODULE_ALIAS("of:N*T*Cqishenglong,gopher2b-lcd");
MODULE_ALIAS("of:N*T*Cqishenglong,gopher2b-lcdC*");
MODULE_ALIAS("of:N*T*Craspberrypi,7inch-dsi");
MODULE_ALIAS("of:N*T*Craspberrypi,7inch-dsiC*");
MODULE_ALIAS("of:N*T*Crocktech,rk070er9427");
MODULE_ALIAS("of:N*T*Crocktech,rk070er9427C*");
MODULE_ALIAS("of:N*T*Crocktech,rk101ii01d-ct");
MODULE_ALIAS("of:N*T*Crocktech,rk101ii01d-ctC*");
MODULE_ALIAS("of:N*T*Csamsung,lsn122dl01-c01");
MODULE_ALIAS("of:N*T*Csamsung,lsn122dl01-c01C*");
MODULE_ALIAS("of:N*T*Csamsung,ltn101nt05");
MODULE_ALIAS("of:N*T*Csamsung,ltn101nt05C*");
MODULE_ALIAS("of:N*T*Csamsung,ltn140at29-301");
MODULE_ALIAS("of:N*T*Csamsung,ltn140at29-301C*");
MODULE_ALIAS("of:N*T*Csatoz,sat050at40h12r2");
MODULE_ALIAS("of:N*T*Csatoz,sat050at40h12r2C*");
MODULE_ALIAS("of:N*T*Csharp,ld-d5116z01b");
MODULE_ALIAS("of:N*T*Csharp,ld-d5116z01bC*");
MODULE_ALIAS("of:N*T*Csharp,lq035q7db03");
MODULE_ALIAS("of:N*T*Csharp,lq035q7db03C*");
MODULE_ALIAS("of:N*T*Csharp,lq070y3dg3b");
MODULE_ALIAS("of:N*T*Csharp,lq070y3dg3bC*");
MODULE_ALIAS("of:N*T*Csharp,lq101k1ly04");
MODULE_ALIAS("of:N*T*Csharp,lq101k1ly04C*");
MODULE_ALIAS("of:N*T*Csharp,lq123p1jx31");
MODULE_ALIAS("of:N*T*Csharp,lq123p1jx31C*");
MODULE_ALIAS("of:N*T*Csharp,ls020b1dd01d");
MODULE_ALIAS("of:N*T*Csharp,ls020b1dd01dC*");
MODULE_ALIAS("of:N*T*Cshelly,sca07010-bfn-lnn");
MODULE_ALIAS("of:N*T*Cshelly,sca07010-bfn-lnnC*");
MODULE_ALIAS("of:N*T*Cstarry,kr070pe2t");
MODULE_ALIAS("of:N*T*Cstarry,kr070pe2tC*");
MODULE_ALIAS("of:N*T*Cstarry,kr122ea0sra");
MODULE_ALIAS("of:N*T*Cstarry,kr122ea0sraC*");
MODULE_ALIAS("of:N*T*Ctfc,s9700rtwv43tr-01b");
MODULE_ALIAS("of:N*T*Ctfc,s9700rtwv43tr-01bC*");
MODULE_ALIAS("of:N*T*Ctianma,tm070jdhg30");
MODULE_ALIAS("of:N*T*Ctianma,tm070jdhg30C*");
MODULE_ALIAS("of:N*T*Ctianma,tm070jvhg33");
MODULE_ALIAS("of:N*T*Ctianma,tm070jvhg33C*");
MODULE_ALIAS("of:N*T*Ctianma,tm070rvhg71");
MODULE_ALIAS("of:N*T*Ctianma,tm070rvhg71C*");
MODULE_ALIAS("of:N*T*Cti,nspire-cx-lcd-panel");
MODULE_ALIAS("of:N*T*Cti,nspire-cx-lcd-panelC*");
MODULE_ALIAS("of:N*T*Cti,nspire-classic-lcd-panel");
MODULE_ALIAS("of:N*T*Cti,nspire-classic-lcd-panelC*");
MODULE_ALIAS("of:N*T*Ctoshiba,lt089ac29000");
MODULE_ALIAS("of:N*T*Ctoshiba,lt089ac29000C*");
MODULE_ALIAS("of:N*T*Ctpk,f07a-0102");
MODULE_ALIAS("of:N*T*Ctpk,f07a-0102C*");
MODULE_ALIAS("of:N*T*Ctpk,f10a-0102");
MODULE_ALIAS("of:N*T*Ctpk,f10a-0102C*");
MODULE_ALIAS("of:N*T*Curt,umsh-8596md-t");
MODULE_ALIAS("of:N*T*Curt,umsh-8596md-tC*");
MODULE_ALIAS("of:N*T*Curt,umsh-8596md-1t");
MODULE_ALIAS("of:N*T*Curt,umsh-8596md-1tC*");
MODULE_ALIAS("of:N*T*Curt,umsh-8596md-7t");
MODULE_ALIAS("of:N*T*Curt,umsh-8596md-7tC*");
MODULE_ALIAS("of:N*T*Curt,umsh-8596md-11t");
MODULE_ALIAS("of:N*T*Curt,umsh-8596md-11tC*");
MODULE_ALIAS("of:N*T*Curt,umsh-8596md-19t");
MODULE_ALIAS("of:N*T*Curt,umsh-8596md-19tC*");
MODULE_ALIAS("of:N*T*Curt,umsh-8596md-20t");
MODULE_ALIAS("of:N*T*Curt,umsh-8596md-20tC*");
MODULE_ALIAS("of:N*T*Cvxt,vl050-8048nt-c01");
MODULE_ALIAS("of:N*T*Cvxt,vl050-8048nt-c01C*");
MODULE_ALIAS("of:N*T*Cwinstar,wf35ltiacd");
MODULE_ALIAS("of:N*T*Cwinstar,wf35ltiacdC*");
MODULE_ALIAS("of:N*T*Cyes-optoelectronics,ytc700tlag-05-201c");
MODULE_ALIAS("of:N*T*Cyes-optoelectronics,ytc700tlag-05-201cC*");
MODULE_ALIAS("of:N*T*Cpanel-dpi");
MODULE_ALIAS("of:N*T*Cpanel-dpiC*");

MODULE_INFO(srcversion, "71FD1252FBB188E7F9C3155");
