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
	{ 0xa960c6f6, "v4l2_ctrl_subdev_log_status" },
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0xdc7f230e, "v4l2_async_register_subdev" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x5a73b0e, "media_entity_pads_init" },
	{ 0xd4bbc3fa, "v4l2_ctrl_new_std_menu_items" },
	{ 0x5e94f5a6, "v4l2_ctrl_new_std" },
	{ 0x8c5005a7, "v4l2_ctrl_handler_init_class" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4fdda2e6, "v4l2_i2c_subdev_init" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x6256f54b, "devm_clk_get" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xa55f0824, "gpiod_set_value" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xa07bbbe8, "gpiod_direction_output" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x8803f3fc, "__v4l2_ctrl_handler_setup" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x8df913c, "v4l2_device_unregister_subdev" },
	{ 0x66d9b1ea, "v4l2_ctrl_handler_free" },
	{ 0x7a07fce0, "v4l2_async_unregister_subdev" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7dbe7b13, "i2c_smbus_read_byte_data" },
	{ 0x2733b16f, "i2c_smbus_write_byte_data" },
};

MODULE_INFO(depends, "videodev,v4l2-async,mc");

MODULE_ALIAS("of:N*T*Covti,ov2640");
MODULE_ALIAS("of:N*T*Covti,ov2640C*");
MODULE_ALIAS("i2c:ov2640");

MODULE_INFO(srcversion, "3911D5F97F24C653DA53C07");
