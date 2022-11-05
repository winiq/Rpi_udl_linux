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
	{ 0x826655e4, "param_ops_int" },
	{ 0x15c6cdf3, "v4l2_event_subdev_unsubscribe" },
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x98889996, "pm_runtime_enable" },
	{ 0xdc7f230e, "v4l2_async_register_subdev" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0xd4bbc3fa, "v4l2_ctrl_new_std_menu_items" },
	{ 0x5e94f5a6, "v4l2_ctrl_new_std" },
	{ 0x8c5005a7, "v4l2_ctrl_handler_init_class" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x75fb7327, "v4l2_fwnode_endpoint_parse" },
	{ 0x3cc85cb8, "of_graph_get_endpoint_by_regs" },
	{ 0xec7a6102, "devm_kasprintf" },
	{ 0xff56896e, "regmap_bulk_read" },
	{ 0x5bd1724b, "of_node_put" },
	{ 0x6a736438, "of_graph_parse_endpoint" },
	{ 0xaaa54a4e, "v4l2_fwnode_connector_add_link" },
	{ 0x4f0a47d7, "v4l2_fwnode_connector_parse" },
	{ 0xb21aa897, "of_graph_get_next_endpoint" },
	{ 0xaf4ed3a3, "of_graph_get_endpoint_count" },
	{ 0x4fdda2e6, "v4l2_i2c_subdev_init" },
	{ 0x7e4cec81, "__devm_regmap_init_i2c" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfd389cbc, "gpiod_set_value_cansleep" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0x821159a, "__pm_runtime_set_status" },
	{ 0x76685e8a, "__pm_runtime_disable" },
	{ 0x66d9b1ea, "v4l2_ctrl_handler_free" },
	{ 0x7a07fce0, "v4l2_async_unregister_subdev" },
	{ 0x612ddce5, "v4l2_fwnode_connector_free" },
	{ 0xafc16968, "v4l2_ctrl_handler_setup" },
	{ 0x29ed3f3f, "media_entity_find_link" },
	{ 0x2bca9add, "media_entity_remote_pad" },
	{ 0x5a84191c, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0x463d274b, "v4l2_src_change_event_subdev_subscribe" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x1b9ef33d, "media_device_unregister_entity" },
	{ 0xa149f723, "media_create_pad_link" },
	{ 0xcbaee58b, "media_device_register_entity" },
	{ 0x5a73b0e, "media_entity_pads_init" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2a6ac568, "__pm_runtime_resume" },
	{ 0x49ba01b3, "__pm_runtime_idle" },
	{ 0x3ca1f2b8, "v4l2_subdev_notify_event" },
	{ 0xc313ff9a, "_dev_printk" },
	{ 0x45a55acd, "regmap_write" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf93042ef, "regmap_read" },
	{ 0x269fdf77, "regmap_update_bits_base" },
};

MODULE_INFO(depends, "videodev,v4l2-async,v4l2-fwnode,mc");

MODULE_ALIAS("of:N*T*Cti,tvp5150");
MODULE_ALIAS("of:N*T*Cti,tvp5150C*");
MODULE_ALIAS("i2c:tvp5150");

MODULE_INFO(srcversion, "0692426C4E65CCC39B8D784");
