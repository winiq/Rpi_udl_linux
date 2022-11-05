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
	{ 0xf11474e5, "usb_serial_generic_get_icount" },
	{ 0xd541ae68, "usb_serial_generic_tiocmiwait" },
	{ 0x4acd7187, "usb_serial_deregister_drivers" },
	{ 0x6d12bd23, "usb_serial_register_drivers" },
	{ 0x87c53e09, "__tty_insert_flip_char" },
	{ 0xfb38c6e2, "tty_flip_buffer_push" },
	{ 0x347fae00, "tty_insert_flip_string_fixed_flag" },
	{ 0x9828c123, "usb_serial_generic_open" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0x15ac1b34, "usb_serial_generic_close" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xfce6b7f2, "usb_submit_urb" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v6547p0232d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18ECp3118d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A53FE2728B279863C625863");
