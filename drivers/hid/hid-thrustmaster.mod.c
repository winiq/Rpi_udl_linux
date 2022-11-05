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
	{ 0x719251e9, "hid_unregister_driver" },
	{ 0xf9ce2f6b, "__hid_register_driver" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd5225981, "usb_interrupt_msg" },
	{ 0x4829a47e, "memcpy" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xc577beb3, "hid_hw_start" },
	{ 0xda39556f, "hid_open_report" },
	{ 0x7b3ae27f, "usb_hid_driver" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x28343fb6, "hid_hw_stop" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x47807871, "usb_kill_urb" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v0000044Fp0000B65D");

MODULE_INFO(srcversion, "B97DA28DBE627B46EE58D76");
