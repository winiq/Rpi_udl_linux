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
	{ 0xd258a1fa, "usbatm_usb_disconnect" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x73708729, "usb_register_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0xc6e96ea0, "atm_dev_signal_change" },
	{ 0x67fe2005, "usb_clear_halt" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x43e735d6, "usb_bulk_msg" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0xa6257a2f, "complete" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xdcbcc479, "usb_string" },
	{ 0x93d03a43, "usbatm_usb_probe" },
	{ 0x92997ed8, "_printk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xc6cbbc89, "capable" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x7d6cfef9, "usb_unlink_urb" },
	{ 0x3c3ff9fd, "sprintf" },
};

MODULE_INFO(depends, "usbatm,atm");

MODULE_ALIAS("usb:v0572pCAFEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pCB00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pCB01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pCB02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pCB06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pCB07d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08E3p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08E3p0102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p3457d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1803p5510d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0675p0200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p330Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p330Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0659p0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0509p0812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v100DpCB01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v100Dp3342d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "DED40E326BF49EE9FD046B4");
