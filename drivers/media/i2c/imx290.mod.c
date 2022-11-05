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
	{ 0x100c50c4, "v4l2_subdev_link_validate" },
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0xf93042ef, "regmap_read" },
	{ 0x2ab24cf1, "pm_runtime_get_if_active" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xfb688429, "__v4l2_ctrl_grab" },
	{ 0xf9a482f9, "msleep" },
	{ 0xafc16968, "v4l2_ctrl_handler_setup" },
	{ 0x2a6ac568, "__pm_runtime_resume" },
	{ 0x45a55acd, "regmap_write" },
	{ 0x49ba01b3, "__pm_runtime_idle" },
	{ 0x98889996, "pm_runtime_enable" },
	{ 0xdc7f230e, "v4l2_async_register_subdev" },
	{ 0x5a73b0e, "media_entity_pads_init" },
	{ 0x4fdda2e6, "v4l2_i2c_subdev_init" },
	{ 0xd2247767, "v4l2_ctrl_new_fwnode_properties" },
	{ 0x4703b1d0, "v4l2_fwnode_endpoint_free" },
	{ 0x4897c5c8, "v4l2_fwnode_device_parse" },
	{ 0xd4bbc3fa, "v4l2_ctrl_new_std_menu_items" },
	{ 0xa3a0a8ad, "v4l2_ctrl_new_int_menu" },
	{ 0x5e94f5a6, "v4l2_ctrl_new_std" },
	{ 0x8c5005a7, "v4l2_ctrl_handler_init_class" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0x14b198a4, "devm_regulator_bulk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xd8eb9296, "fwnode_property_read_u32_array" },
	{ 0x6256f54b, "devm_clk_get" },
	{ 0xc1ae1034, "fwnode_handle_put" },
	{ 0x7a9cd102, "v4l2_fwnode_endpoint_alloc_parse" },
	{ 0xfb2b41b8, "fwnode_graph_get_next_endpoint" },
	{ 0xef48ca0f, "dev_fwnode" },
	{ 0x6ad73e27, "of_match_device" },
	{ 0x7e4cec81, "__devm_regmap_init_i2c" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x821159a, "__pm_runtime_set_status" },
	{ 0x76685e8a, "__pm_runtime_disable" },
	{ 0x66d9b1ea, "v4l2_ctrl_handler_free" },
	{ 0x7a07fce0, "v4l2_async_unregister_subdev" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf4822bf6, "__v4l2_ctrl_modify_range" },
	{ 0xde1b3c8d, "__v4l2_ctrl_s_ctrl_int64" },
	{ 0x17407c9a, "__v4l2_ctrl_s_ctrl" },
	{ 0xe2822320, "__v4l2_find_nearest_size" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2477397d, "regulator_bulk_disable" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xfd389cbc, "gpiod_set_value_cansleep" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xae80a2a5, "regulator_bulk_enable" },
	{ 0x815588a6, "clk_enable" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x7c9a7371, "clk_prepare" },
};

MODULE_INFO(depends, "videodev,v4l2-async,mc,v4l2-fwnode");

MODULE_ALIAS("of:N*T*Csony,imx327");
MODULE_ALIAS("of:N*T*Csony,imx327C*");
MODULE_ALIAS("of:N*T*Csony,imx327-mono");
MODULE_ALIAS("of:N*T*Csony,imx327-monoC*");
MODULE_ALIAS("of:N*T*Csony,imx290");
MODULE_ALIAS("of:N*T*Csony,imx290C*");
MODULE_ALIAS("of:N*T*Csony,imx290-mono");
MODULE_ALIAS("of:N*T*Csony,imx290-monoC*");
MODULE_ALIAS("of:N*T*Csony,imx462");
MODULE_ALIAS("of:N*T*Csony,imx462C*");
MODULE_ALIAS("of:N*T*Csony,imx462-mono");
MODULE_ALIAS("of:N*T*Csony,imx462-monoC*");

MODULE_INFO(srcversion, "E1D5ED84CA72642CE0A1073");
