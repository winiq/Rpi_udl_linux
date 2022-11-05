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
	{ 0x8aaa0516, "usbnet_resume" },
	{ 0x321fd4fc, "usbnet_suspend" },
	{ 0xdec7b694, "usbnet_disconnect" },
	{ 0xbb447ed7, "usbnet_cdc_status" },
	{ 0xd4c85baf, "usbnet_manage_power" },
	{ 0x6e4a9516, "usbnet_cdc_unbind" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x73708729, "usb_register_driver" },
	{ 0x81cca809, "usbnet_probe" },
	{ 0xfa8b0a70, "rtl8152_get_version" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x64495964, "usbnet_write_cmd" },
	{ 0xbf75d265, "usbnet_read_cmd" },
	{ 0x2a7c8130, "usbnet_cdc_bind" },
};

MODULE_INFO(depends, "cdc_ether,r8152");

MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp721Ed*dc*dsc*dp*ic02isc06ip00in*");

MODULE_INFO(srcversion, "0536198173B079922A4080B");
