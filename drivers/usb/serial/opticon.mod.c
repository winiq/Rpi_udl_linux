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
	{ 0xf4e83bc, "usb_serial_generic_unthrottle" },
	{ 0x47b0e848, "usb_serial_generic_throttle" },
	{ 0x4acd7187, "usb_serial_deregister_drivers" },
	{ 0x6d12bd23, "usb_serial_register_drivers" },
	{ 0x9828c123, "usb_serial_generic_open" },
	{ 0x67fe2005, "usb_clear_halt" },
	{ 0xfb38c6e2, "tty_flip_buffer_push" },
	{ 0x347fae00, "tty_insert_flip_string_fixed_flag" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x15ac1b34, "usb_serial_generic_close" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xb2b3219f, "usb_serial_port_softint" },
	{ 0x7e009d2, "usb_unanchor_urb" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0x2f5da2fc, "usb_anchor_urb" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v065Ap0009d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6BC55C155328BB6D03CB38B");
