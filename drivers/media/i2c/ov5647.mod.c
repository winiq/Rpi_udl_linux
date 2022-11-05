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
	{ 0x15c6cdf3, "v4l2_event_subdev_unsubscribe" },
	{ 0x5a84191c, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x2ab24cf1, "pm_runtime_get_if_active" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8803f3fc, "__v4l2_ctrl_handler_setup" },
	{ 0x2a6ac568, "__pm_runtime_resume" },
	{ 0x49ba01b3, "__pm_runtime_idle" },
	{ 0x98889996, "pm_runtime_enable" },
	{ 0x821159a, "__pm_runtime_set_status" },
	{ 0x5702305d, "v4l2_async_register_subdev_sensor" },
	{ 0x5a73b0e, "media_entity_pads_init" },
	{ 0x4fdda2e6, "v4l2_i2c_subdev_init" },
	{ 0xd2247767, "v4l2_ctrl_new_fwnode_properties" },
	{ 0x4897c5c8, "v4l2_fwnode_device_parse" },
	{ 0x33eb4b8b, "v4l2_ctrl_new_std_menu" },
	{ 0x5e94f5a6, "v4l2_ctrl_new_std" },
	{ 0x8c5005a7, "v4l2_ctrl_handler_init_class" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x14b198a4, "devm_regulator_bulk_get" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x6256f54b, "devm_clk_get" },
	{ 0x5bd1724b, "of_node_put" },
	{ 0x75fb7327, "v4l2_fwnode_endpoint_parse" },
	{ 0xb21aa897, "of_graph_get_next_endpoint" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x76685e8a, "__pm_runtime_disable" },
	{ 0x8df913c, "v4l2_device_unregister_subdev" },
	{ 0x66d9b1ea, "v4l2_ctrl_handler_free" },
	{ 0x7a07fce0, "v4l2_async_unregister_subdev" },
	{ 0x17407c9a, "__v4l2_ctrl_s_ctrl" },
	{ 0xf4822bf6, "__v4l2_ctrl_modify_range" },
	{ 0xe2822320, "__v4l2_find_nearest_size" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x2477397d, "regulator_bulk_disable" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfd389cbc, "gpiod_set_value_cansleep" },
	{ 0xae80a2a5, "regulator_bulk_enable" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x70127197, "i2c_transfer_buffer_flags" },
};

MODULE_INFO(depends, "videodev,v4l2-fwnode,mc,v4l2-async");

MODULE_ALIAS("of:N*T*Covti,ov5647");
MODULE_ALIAS("of:N*T*Covti,ov5647C*");
MODULE_ALIAS("i2c:ov5647");

MODULE_INFO(srcversion, "6AC6AB7826EA6A56B32BA2B");
