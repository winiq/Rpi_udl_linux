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
	{ 0x95cc0f6b, "noop_llseek" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x73708729, "usb_register_driver" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x9a177bfc, "usb_register_dev" },
	{ 0xdcbcc479, "usb_string" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1e9c590a, "usb_find_common_endpoints_reverse" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8452bdbc, "usb_get_dev" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4b2c3efc, "usb_poison_urb" },
	{ 0x45435574, "usb_deregister_dev" },
	{ 0x4b9e8b64, "usb_put_dev" },
	{ 0x37a0cba, "kfree" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4829a47e, "memcpy" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x92997ed8, "_printk" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0x533ca3f8, "usb_find_interface" },
	{ 0x89940875, "mutex_lock_interruptible" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0A07p0064d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A07p0078d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A07p0082d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A07p00C8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A07p00D0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A07p00DAd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "1935B815D259699B2EA69A7");
