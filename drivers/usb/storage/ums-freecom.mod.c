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
	{ 0xf9a482f9, "msleep" },
	{ 0x639fcadd, "usb_stor_bulk_transfer_buf" },
	{ 0x9796a617, "usb_stor_post_reset" },
	{ 0x8795ac9, "usb_stor_control_msg" },
	{ 0x642898ba, "usb_stor_disconnect" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x31239651, "usb_stor_probe2" },
	{ 0xce582711, "usb_stor_host_template_init" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x59ea7166, "usb_stor_pre_reset" },
	{ 0xecb2a27b, "usb_stor_reset_resume" },
	{ 0x92997ed8, "_printk" },
	{ 0xedcc9acb, "usb_stor_suspend" },
	{ 0x557c933d, "usb_stor_probe1" },
	{ 0xd4a38771, "usb_stor_resume" },
	{ 0x73708729, "usb_register_driver" },
	{ 0x42448789, "usb_stor_bulk_srb" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v07ABpFC01d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "1B2A0245C595B68FDB1BD5B");
