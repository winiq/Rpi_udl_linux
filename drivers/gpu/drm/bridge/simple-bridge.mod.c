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
	{ 0x6a725913, "drm_atomic_helper_connector_destroy_state" },
	{ 0x7e80de26, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xd651913f, "drm_connector_cleanup" },
	{ 0x7cdc1a9e, "drm_helper_probe_single_connector_modes" },
	{ 0x263b9f14, "drm_atomic_helper_connector_reset" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0x76116d00, "drm_set_preferred_mode" },
	{ 0x2b1fd62c, "drm_add_modes_noedid" },
	{ 0x92997ed8, "_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xba5a062, "drm_add_edid_modes" },
	{ 0x104c60b0, "drm_connector_update_edid_property" },
	{ 0x2ceab617, "drm_bridge_get_edid" },
	{ 0x20cf3f7f, "drm_connector_attach_encoder" },
	{ 0x560d50cc, "drm_connector_init_with_ddc" },
	{ 0x6cfc0669, "drm_bridge_attach" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xaafca3e9, "drm_bridge_add" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0xe4afd411, "devm_regulator_get_optional" },
	{ 0x5bd1724b, "of_node_put" },
	{ 0xe212df4, "of_drm_find_bridge" },
	{ 0x392473a2, "of_graph_get_remote_node" },
	{ 0x538ddda2, "of_device_get_match_data" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xa6f5a9be, "drm_bridge_detect" },
	{ 0x3967f406, "regulator_disable" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0xfd389cbc, "gpiod_set_value_cansleep" },
	{ 0xd769d20f, "regulator_enable" },
	{ 0x29d46e06, "drm_bridge_remove" },
};

MODULE_INFO(depends, "drm_kms_helper,drm");

MODULE_ALIAS("of:N*T*Cdumb-vga-dac");
MODULE_ALIAS("of:N*T*Cdumb-vga-dacC*");
MODULE_ALIAS("of:N*T*Cadi,adv7123");
MODULE_ALIAS("of:N*T*Cadi,adv7123C*");
MODULE_ALIAS("of:N*T*Cti,opa362");
MODULE_ALIAS("of:N*T*Cti,opa362C*");
MODULE_ALIAS("of:N*T*Cti,ths8135");
MODULE_ALIAS("of:N*T*Cti,ths8135C*");
MODULE_ALIAS("of:N*T*Cti,ths8134");
MODULE_ALIAS("of:N*T*Cti,ths8134C*");

MODULE_INFO(srcversion, "5B0B6E4870FE3F405C355E8");
