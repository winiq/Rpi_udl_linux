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
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcc26711b, "no_llseek" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x45435574, "usb_deregister_dev" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9a177bfc, "usb_register_dev" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6626afca, "down" },
	{ 0xeeb8e6b5, "platform_device_unregister" },
	{ 0x6f0b8b9e, "usb_free_coherent" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0x3e555d03, "platform_device_register" },
	{ 0x8452bdbc, "usb_get_dev" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x43e735d6, "usb_bulk_msg" },
	{ 0x4b9e8b64, "usb_put_dev" },
	{ 0x92997ed8, "_printk" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x533ca3f8, "usb_find_interface" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xcf2a6966, "up" },
	{ 0x73708729, "usb_register_driver" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa6257a2f, "complete" },
	{ 0x9d761192, "usb_alloc_coherent" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0x37804aa, "usb_alloc_urb" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0403pD6EAd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "3263579B05DD885E2415B57");
