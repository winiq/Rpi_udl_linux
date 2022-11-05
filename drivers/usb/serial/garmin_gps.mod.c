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
	{ 0x4acd7187, "usb_serial_deregister_drivers" },
	{ 0x6d12bd23, "usb_serial_register_drivers" },
	{ 0x36a08a19, "usb_reset_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x7e009d2, "usb_unanchor_urb" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0x2f5da2fc, "usb_anchor_urb" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb2b3219f, "usb_serial_port_softint" },
	{ 0x4829a47e, "memcpy" },
	{ 0xfb38c6e2, "tty_flip_buffer_push" },
	{ 0x347fae00, "tty_insert_flip_string_fixed_flag" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v091Ep0003d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "3CFDA18698070A99403BF2B");
