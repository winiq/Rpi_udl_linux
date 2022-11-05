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
	{ 0x98889996, "pm_runtime_enable" },
	{ 0x821159a, "__pm_runtime_set_status" },
	{ 0x5702305d, "v4l2_async_register_subdev_sensor" },
	{ 0x5a73b0e, "media_entity_pads_init" },
	{ 0xd4bbc3fa, "v4l2_ctrl_new_std_menu_items" },
	{ 0x5e94f5a6, "v4l2_ctrl_new_std" },
	{ 0xa3a0a8ad, "v4l2_ctrl_new_int_menu" },
	{ 0x8c5005a7, "v4l2_ctrl_handler_init_class" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x67769b09, "i2c_transfer" },
	{ 0x4fdda2e6, "v4l2_i2c_subdev_init" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x4703b1d0, "v4l2_fwnode_endpoint_free" },
	{ 0xc1ae1034, "fwnode_handle_put" },
	{ 0x7a9cd102, "v4l2_fwnode_endpoint_alloc_parse" },
	{ 0xfb2b41b8, "fwnode_graph_get_next_endpoint" },
	{ 0xd8eb9296, "fwnode_property_read_u32_array" },
	{ 0xef48ca0f, "dev_fwnode" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8803f3fc, "__v4l2_ctrl_handler_setup" },
	{ 0x2a6ac568, "__pm_runtime_resume" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x76685e8a, "__pm_runtime_disable" },
	{ 0x66d9b1ea, "v4l2_ctrl_handler_free" },
	{ 0x7a07fce0, "v4l2_async_unregister_subdev" },
	{ 0x49ba01b3, "__pm_runtime_idle" },
	{ 0x2ab24cf1, "pm_runtime_get_if_active" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x70127197, "i2c_transfer_buffer_flags" },
	{ 0xf4822bf6, "__v4l2_ctrl_modify_range" },
	{ 0xde1b3c8d, "__v4l2_ctrl_s_ctrl_int64" },
	{ 0x17407c9a, "__v4l2_ctrl_s_ctrl" },
	{ 0xe2822320, "__v4l2_find_nearest_size" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
};

MODULE_INFO(depends, "videodev,v4l2-fwnode,mc,v4l2-async");

MODULE_ALIAS("acpi*:OVTI9734:*");

MODULE_INFO(srcversion, "2C00660F50A862B8FB1788B");
