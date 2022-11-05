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
	{ 0x8ced484a, "compat_ptr_ioctl" },
	{ 0x9f64a537, "default_llseek" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x73708729, "usb_register_driver" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x163df996, "usb_get_from_anchor" },
	{ 0x7e009d2, "usb_unanchor_urb" },
	{ 0x92e683f5, "down_timeout" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xdcb764ad, "memset" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x92997ed8, "_printk" },
	{ 0x533ca3f8, "usb_find_interface" },
	{ 0x9a177bfc, "usb_register_dev" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8452bdbc, "usb_get_dev" },
	{ 0x45435574, "usb_deregister_dev" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xb4d6d6bf, "kill_fasync" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0x7e8d8619, "usb_anchor_empty" },
	{ 0xcf2a6966, "up" },
	{ 0x2f5da2fc, "usb_anchor_urb" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x56470118, "__warn_printk" },
	{ 0x67fe2005, "usb_clear_halt" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x43e735d6, "usb_bulk_msg" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xd68955c5, "fasync_helper" },
	{ 0x37a0cba, "kfree" },
	{ 0x4b9e8b64, "usb_put_dev" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x807766ea, "usb_scuttle_anchored_urbs" },
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icFEisc03ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icFEisc03ip01in*");

MODULE_INFO(srcversion, "A55300AFA898251D26323BB");
