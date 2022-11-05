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
	{ 0x2f4ca2d0, "param_array_ops" },
	{ 0xd258a1fa, "usbatm_usb_disconnect" },
	{ 0x6cae3983, "param_ops_ushort" },
	{ 0x79996a06, "param_ops_byte" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x73708729, "usb_register_driver" },
	{ 0x92997ed8, "_printk" },
	{ 0xef37ae62, "usb_altnum_to_altsetting" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xe02472ef, "usb_set_interface" },
	{ 0x6dddfb6d, "usb_driver_claim_interface" },
	{ 0x6bfbee5c, "usb_driver_release_interface" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x93d03a43, "usbatm_usb_probe" },
};

MODULE_INFO(depends, "usbatm");


MODULE_INFO(srcversion, "68F6109825DE6FE81708C65");
