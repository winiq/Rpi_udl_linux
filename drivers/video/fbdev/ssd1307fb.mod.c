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
	{ 0xb92873bd, "param_ops_uint" },
	{ 0xff1ee9ed, "fb_sys_read" },
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x84744745, "backlight_device_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xfc460a4b, "register_framebuffer" },
	{ 0xcb19300a, "pwm_get" },
	{ 0xd769d20f, "regulator_enable" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfd389cbc, "gpiod_set_value_cansleep" },
	{ 0x175a92e9, "fb_deferred_io_init" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xdf240d2f, "device_property_present" },
	{ 0x49c4e465, "device_property_read_u8_array" },
	{ 0x12350178, "device_property_read_u32_array" },
	{ 0xe4afd411, "devm_regulator_get_optional" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0x3409bde9, "device_get_match_data" },
	{ 0xa9dc31a6, "framebuffer_alloc" },
	{ 0xae90c37c, "sys_fillrect" },
	{ 0x354d4c75, "sys_copyarea" },
	{ 0xb1b62027, "sys_imageblit" },
	{ 0xdcb764ad, "memset" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8672b7c8, "pwm_apply_state" },
	{ 0xb45dbb6c, "pwm_put" },
	{ 0x45b114d, "framebuffer_release" },
	{ 0xdf76e8c0, "__free_pages" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xfbc7ec2d, "fb_deferred_io_cleanup" },
	{ 0x3967f406, "regulator_disable" },
	{ 0x7a289047, "unregister_framebuffer" },
	{ 0x4b5a0671, "backlight_device_unregister" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x70127197, "i2c_transfer_buffer_flags" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
};

MODULE_INFO(depends, "fb_sys_fops,backlight,sysfillrect,syscopyarea,sysimgblt");

MODULE_ALIAS("i2c:ssd1305fb");
MODULE_ALIAS("i2c:ssd1306fb");
MODULE_ALIAS("i2c:ssd1307fb");
MODULE_ALIAS("i2c:ssd1309fb");
MODULE_ALIAS("of:N*T*Csolomon,ssd1305fb-i2c");
MODULE_ALIAS("of:N*T*Csolomon,ssd1305fb-i2cC*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1306fb-i2c");
MODULE_ALIAS("of:N*T*Csolomon,ssd1306fb-i2cC*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1307fb-i2c");
MODULE_ALIAS("of:N*T*Csolomon,ssd1307fb-i2cC*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1309fb-i2c");
MODULE_ALIAS("of:N*T*Csolomon,ssd1309fb-i2cC*");

MODULE_INFO(srcversion, "DCE343CC59270E3FBF56BA5");
