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
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0xff1ee9ed, "fb_sys_read" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0xdcb764ad, "memset" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xddfdbc26, "fb_sys_write" },
	{ 0xae90c37c, "sys_fillrect" },
	{ 0x354d4c75, "sys_copyarea" },
	{ 0xb1b62027, "sys_imageblit" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x92997ed8, "_printk" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xfc460a4b, "register_framebuffer" },
	{ 0x175a92e9, "fb_deferred_io_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa9dc31a6, "framebuffer_alloc" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb9991b68, "rpisense_get_dev" },
	{ 0x2277e7b9, "rpisense_block_write" },
	{ 0x999e8297, "vfree" },
	{ 0x45b114d, "framebuffer_release" },
	{ 0xfbc7ec2d, "fb_deferred_io_cleanup" },
	{ 0x7a289047, "unregister_framebuffer" },
};

MODULE_INFO(depends, "fb_sys_fops,sysfillrect,syscopyarea,sysimgblt,rpisense-core");

MODULE_ALIAS("platform:rpi-sense-fb");
MODULE_ALIAS("of:N*T*Crpi,rpi-sense-fb");
MODULE_ALIAS("of:N*T*Crpi,rpi-sense-fbC*");

MODULE_INFO(srcversion, "BA8465552677687B0951966");
