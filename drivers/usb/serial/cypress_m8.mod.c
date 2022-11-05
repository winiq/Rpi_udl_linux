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
	{ 0x826655e4, "param_ops_int" },
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0xd541ae68, "usb_serial_generic_tiocmiwait" },
	{ 0x4acd7187, "usb_serial_deregister_drivers" },
	{ 0x6d12bd23, "usb_serial_register_drivers" },
	{ 0x67fe2005, "usb_clear_halt" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xf72a65ea, "tty_get_char_size" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0x5d7062fb, "usb_reset_configuration" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x69f849ce, "tty_encode_baud_rate" },
	{ 0x955fcad0, "tty_hangup" },
	{ 0xfb38c6e2, "tty_flip_buffer_push" },
	{ 0x347fae00, "tty_insert_flip_string_fixed_flag" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6a013a12, "tty_kref_put" },
	{ 0x3bc51a5a, "tty_port_tty_get" },
	{ 0xb2b3219f, "usb_serial_port_softint" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xdcb764ad, "memset" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v1163p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1163p0200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p5500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17DDp5500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D9Fp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6737p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D0p4101d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "917C19F5745B76F959B0318");
