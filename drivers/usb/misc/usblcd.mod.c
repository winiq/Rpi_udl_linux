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
	{ 0xda1a0029, "_dev_warn" },
	{ 0x9a177bfc, "usb_register_dev" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x8452bdbc, "usb_get_dev" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x45435574, "usb_deregister_dev" },
	{ 0xc2469bb6, "usb_autopm_put_interface" },
	{ 0x92997ed8, "_printk" },
	{ 0xdc0b5074, "usb_autopm_get_interface" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x533ca3f8, "usb_find_interface" },
	{ 0x98cf60b3, "strlen" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x43e735d6, "usb_bulk_msg" },
	{ 0x7e009d2, "usb_unanchor_urb" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xdcb764ad, "memset" },
	{ 0x53b954a2, "up_read" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0x2f5da2fc, "usb_anchor_urb" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x9d761192, "usb_alloc_coherent" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0x668b19a1, "down_read" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0xcf2a6966, "up" },
	{ 0x6f0b8b9e, "usb_free_coherent" },
	{ 0x56470118, "__warn_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x4b9e8b64, "usb_put_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v10D2p*d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F6418DF2362497557790A5F");
