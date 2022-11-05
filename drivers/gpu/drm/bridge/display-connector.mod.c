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
	{ 0x18dd4a04, "drm_atomic_helper_bridge_reset" },
	{ 0x1d34d3d1, "drm_atomic_helper_bridge_destroy_state" },
	{ 0xf895cc85, "drm_atomic_helper_bridge_duplicate_state" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x4bc387ab, "drm_atomic_get_new_bridge_state" },
	{ 0xe0da39cb, "drm_bridge_hpd_notify" },
	{ 0x256253a, "drm_probe_ddc" },
	{ 0x3a760923, "gpiod_get_value_cansleep" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe536ac87, "of_find_property" },
	{ 0x5bd1724b, "of_node_put" },
	{ 0xd75448c0, "of_get_i2c_adapter_by_node" },
	{ 0xc08f6533, "of_parse_phandle" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xd769d20f, "regulator_enable" },
	{ 0xe4afd411, "devm_regulator_get_optional" },
	{ 0xc47fa31d, "gpiod_to_irq" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0xaafca3e9, "drm_bridge_add" },
	{ 0xbcb7079c, "of_property_read_string" },
	{ 0x538ddda2, "of_device_get_match_data" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x3fc5e10c, "drm_get_edid" },
	{ 0xcce69d19, "i2c_put_adapter" },
	{ 0x29d46e06, "drm_bridge_remove" },
	{ 0x3967f406, "regulator_disable" },
};

MODULE_INFO(depends, "drm_kms_helper,drm");

MODULE_ALIAS("of:N*T*Ccomposite-video-connector");
MODULE_ALIAS("of:N*T*Ccomposite-video-connectorC*");
MODULE_ALIAS("of:N*T*Cdvi-connector");
MODULE_ALIAS("of:N*T*Cdvi-connectorC*");
MODULE_ALIAS("of:N*T*Chdmi-connector");
MODULE_ALIAS("of:N*T*Chdmi-connectorC*");
MODULE_ALIAS("of:N*T*Csvideo-connector");
MODULE_ALIAS("of:N*T*Csvideo-connectorC*");
MODULE_ALIAS("of:N*T*Cvga-connector");
MODULE_ALIAS("of:N*T*Cvga-connectorC*");
MODULE_ALIAS("of:N*T*Cdp-connector");
MODULE_ALIAS("of:N*T*Cdp-connectorC*");

MODULE_INFO(srcversion, "7E1F2565E8EEEBAC2ABEBED");
