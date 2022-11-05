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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x163df996, "usb_get_from_anchor" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0xdc0b5074, "usb_autopm_get_interface" },
	{ 0x7d6cfef9, "usb_unlink_urb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe150a133, "usb_autopm_put_interface_async" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x347fae00, "tty_insert_flip_string_fixed_flag" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0x5c73c9dc, "usb_autopm_get_interface_async" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xd1f66e2e, "usb_autopm_get_interface_no_resume" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xfb38c6e2, "tty_flip_buffer_push" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xb2b3219f, "usb_serial_port_softint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0xc2469bb6, "usb_autopm_put_interface" },
	{ 0x2f5da2fc, "usb_anchor_urb" },
	{ 0x37804aa, "usb_alloc_urb" },
};

MODULE_INFO(depends, "usbserial");


MODULE_INFO(srcversion, "0F0569F8CBE07F95850FF86");
