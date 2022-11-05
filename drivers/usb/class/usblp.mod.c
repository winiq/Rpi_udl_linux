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
	{ 0x95cc0f6b, "noop_llseek" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x73708729, "usb_register_driver" },
	{ 0xdcb764ad, "memset" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x1000e51, "schedule" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x9a177bfc, "usb_register_dev" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0xc8864b0d, "usb_get_intf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xdc0b5074, "usb_autopm_get_interface" },
	{ 0x533ca3f8, "usb_find_interface" },
	{ 0xc2469bb6, "usb_autopm_put_interface" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x842f046d, "usb_poison_anchored_urbs" },
	{ 0x45435574, "usb_deregister_dev" },
	{ 0x1bc37f54, "usb_put_intf" },
	{ 0x37a0cba, "kfree" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x56470118, "__warn_printk" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0xe02472ef, "usb_set_interface" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x92997ed8, "_printk" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0x7e009d2, "usb_unanchor_urb" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x2f5da2fc, "usb_anchor_urb" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0x3c3ff9fd, "sprintf" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v*p*d*dc07dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc07dsc01dp02ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc07dsc01dp03ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic07isc01ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic07isc01ip02in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic07isc01ip03in*");
MODULE_ALIAS("usb:v04B8p0202d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "EFA4AEE65DA637CC5975DD9");
