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
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0x92997ed8, "_printk" },
	{ 0xdc7f230e, "v4l2_async_register_subdev" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x696f8a06, "i2c_new_dummy_device" },
	{ 0x5a73b0e, "media_entity_pads_init" },
	{ 0xafc16968, "v4l2_ctrl_handler_setup" },
	{ 0x2be93da8, "v4l2_ctrl_new_custom" },
	{ 0x5e94f5a6, "v4l2_ctrl_new_std" },
	{ 0x8c5005a7, "v4l2_ctrl_handler_init_class" },
	{ 0x4fdda2e6, "v4l2_i2c_subdev_init" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe536ac87, "of_find_property" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5a84191c, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0x463d274b, "v4l2_src_change_event_subdev_subscribe" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x3ca1f2b8, "v4l2_subdev_notify_event" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xfd389cbc, "gpiod_set_value_cansleep" },
	{ 0xca58e44a, "i2c_unregister_device" },
	{ 0x66d9b1ea, "v4l2_ctrl_handler_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x7a07fce0, "v4l2_async_unregister_subdev" },
	{ 0x7dbe7b13, "i2c_smbus_read_byte_data" },
	{ 0x2733b16f, "i2c_smbus_write_byte_data" },
};

MODULE_INFO(depends, "videodev,v4l2-async,mc");

MODULE_ALIAS("of:N*T*Cadi,adv7180");
MODULE_ALIAS("of:N*T*Cadi,adv7180C*");
MODULE_ALIAS("of:N*T*Cadi,adv7180cp");
MODULE_ALIAS("of:N*T*Cadi,adv7180cpC*");
MODULE_ALIAS("of:N*T*Cadi,adv7180st");
MODULE_ALIAS("of:N*T*Cadi,adv7180stC*");
MODULE_ALIAS("of:N*T*Cadi,adv7182");
MODULE_ALIAS("of:N*T*Cadi,adv7182C*");
MODULE_ALIAS("of:N*T*Cadi,adv7280");
MODULE_ALIAS("of:N*T*Cadi,adv7280C*");
MODULE_ALIAS("of:N*T*Cadi,adv7280-m");
MODULE_ALIAS("of:N*T*Cadi,adv7280-mC*");
MODULE_ALIAS("of:N*T*Cadi,adv7281");
MODULE_ALIAS("of:N*T*Cadi,adv7281C*");
MODULE_ALIAS("of:N*T*Cadi,adv7281-m");
MODULE_ALIAS("of:N*T*Cadi,adv7281-mC*");
MODULE_ALIAS("of:N*T*Cadi,adv7281-ma");
MODULE_ALIAS("of:N*T*Cadi,adv7281-maC*");
MODULE_ALIAS("of:N*T*Cadi,adv7282");
MODULE_ALIAS("of:N*T*Cadi,adv7282C*");
MODULE_ALIAS("of:N*T*Cadi,adv7282-m");
MODULE_ALIAS("of:N*T*Cadi,adv7282-mC*");
MODULE_ALIAS("i2c:adv7180");
MODULE_ALIAS("i2c:adv7180cp");
MODULE_ALIAS("i2c:adv7180st");
MODULE_ALIAS("i2c:adv7182");
MODULE_ALIAS("i2c:adv7280");
MODULE_ALIAS("i2c:adv7280-m");
MODULE_ALIAS("i2c:adv7281");
MODULE_ALIAS("i2c:adv7281-m");
MODULE_ALIAS("i2c:adv7281-ma");
MODULE_ALIAS("i2c:adv7282");
MODULE_ALIAS("i2c:adv7282-m");

MODULE_INFO(srcversion, "225F1D8E77E25F621E96F4F");
