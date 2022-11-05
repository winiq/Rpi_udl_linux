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
	{ 0x9796a617, "usb_stor_post_reset" },
	{ 0x1bc3edc2, "usb_stor_sense_invalidCDB" },
	{ 0x642898ba, "usb_stor_disconnect" },
	{ 0xade43ee1, "scsi_eh_restore_cmnd" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x31239651, "usb_stor_probe2" },
	{ 0x3c7556f0, "usb_stor_transparent_scsi_command" },
	{ 0xce582711, "usb_stor_host_template_init" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x59ea7166, "usb_stor_pre_reset" },
	{ 0xecb2a27b, "usb_stor_reset_resume" },
	{ 0xedcc9acb, "usb_stor_suspend" },
	{ 0x557c933d, "usb_stor_probe1" },
	{ 0x7fa51128, "scsi_eh_prep_cmnd" },
	{ 0xd4a38771, "usb_stor_resume" },
	{ 0x73708729, "usb_register_driver" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v04B4p6830d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p6831d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14CDp6116d0160dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0B2A33C0EEA7B71C05133F3");
