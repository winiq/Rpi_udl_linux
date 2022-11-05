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
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0xfb688429, "__v4l2_ctrl_grab" },
	{ 0xdc7f230e, "v4l2_async_register_subdev" },
	{ 0x17407c9a, "__v4l2_ctrl_s_ctrl" },
	{ 0xb0e308ca, "v4l2_ctrl_find" },
	{ 0x5a73b0e, "media_entity_pads_init" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbdfb33d, "desc_to_gpio" },
	{ 0xdcb4af72, "devm_gpiod_get" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x6256f54b, "devm_clk_get" },
	{ 0xc1ae1034, "fwnode_handle_put" },
	{ 0x75fb7327, "v4l2_fwnode_endpoint_parse" },
	{ 0xfb2b41b8, "fwnode_graph_get_next_endpoint" },
	{ 0xef48ca0f, "dev_fwnode" },
	{ 0x4fdda2e6, "v4l2_i2c_subdev_init" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x2be93da8, "v4l2_ctrl_new_custom" },
	{ 0x8c5005a7, "v4l2_ctrl_handler_init_class" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xafc16968, "v4l2_ctrl_handler_setup" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xfd389cbc, "gpiod_set_value_cansleep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x67769b09, "i2c_transfer" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x70127197, "i2c_transfer_buffer_flags" },
	{ 0x66d9b1ea, "v4l2_ctrl_handler_free" },
	{ 0x8df913c, "v4l2_device_unregister_subdev" },
	{ 0x7a07fce0, "v4l2_async_unregister_subdev" },
};

MODULE_INFO(depends, "videodev,v4l2-async,mc,v4l2-fwnode");

MODULE_ALIAS("of:N*T*Cinfineon,irs1125");
MODULE_ALIAS("of:N*T*Cinfineon,irs1125C*");

MODULE_INFO(srcversion, "2153CC3D11B751D3E57ADCD");
