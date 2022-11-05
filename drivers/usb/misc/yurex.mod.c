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
	{ 0x9f64a537, "default_llseek" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x73708729, "usb_register_driver" },
	{ 0x92997ed8, "_printk" },
	{ 0x533ca3f8, "usb_find_interface" },
	{ 0x9a177bfc, "usb_register_dev" },
	{ 0x9d761192, "usb_alloc_coherent" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0xc8864b0d, "usb_get_intf" },
	{ 0x8452bdbc, "usb_get_dev" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x4b2c3efc, "usb_poison_urb" },
	{ 0x45435574, "usb_deregister_dev" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x61b7b126, "simple_strtoull" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xb4d6d6bf, "kill_fasync" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0xd68955c5, "fasync_helper" },
	{ 0x4b9e8b64, "usb_put_dev" },
	{ 0x1bc37f54, "usb_put_intf" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0x6f0b8b9e, "usb_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0x47807871, "usb_kill_urb" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0C45p1010d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "98DCC5D294CB42DDB5E2607");
