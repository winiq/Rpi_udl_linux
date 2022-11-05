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
	{ 0x254ccda4, "usb_deregister" },
	{ 0x73708729, "usb_register_driver" },
	{ 0x87b8798d, "sg_next" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd469bfe5, "scsi_scan_host" },
	{ 0xa154077, "scsi_add_host_with_dma" },
	{ 0x7b9655e1, "scsi_host_alloc" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x92997ed8, "_printk" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x36a08a19, "usb_reset_device" },
	{ 0x3416c0e5, "usb_lock_device_for_reset" },
	{ 0x94368263, "blk_queue_dma_alignment" },
	{ 0x37a0cba, "kfree" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0x2c6f26c1, "scsi_host_put" },
	{ 0xbf76e6d3, "scsi_remove_host" },
	{ 0x47807871, "usb_kill_urb" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v04CEp0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp0094d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp0099d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp009Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp00A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp00A3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp80A3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp80ACd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp00B6d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B17D94EDFED422A2E30F942");
