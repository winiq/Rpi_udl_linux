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
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x98cf60b3, "strlen" },
	{ 0x26c640b6, "usb_stor_set_xfer_buf" },
	{ 0x639fcadd, "usb_stor_bulk_transfer_buf" },
	{ 0x81807cf1, "usb_stor_access_xfer_buf" },
	{ 0x9796a617, "usb_stor_post_reset" },
	{ 0x5d7062fb, "usb_reset_configuration" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x642898ba, "usb_stor_disconnect" },
	{ 0xdcb764ad, "memset" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x31239651, "usb_stor_probe2" },
	{ 0xfed95727, "fill_inquiry_response" },
	{ 0xce582711, "usb_stor_host_template_init" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x59ea7166, "usb_stor_pre_reset" },
	{ 0xecb2a27b, "usb_stor_reset_resume" },
	{ 0xee06740a, "usb_stor_ctrl_transfer" },
	{ 0x92997ed8, "_printk" },
	{ 0xedcc9acb, "usb_stor_suspend" },
	{ 0x9acc942a, "usb_stor_CB_reset" },
	{ 0x557c933d, "usb_stor_probe1" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xd4a38771, "usb_stor_resume" },
	{ 0x4829a47e, "memcpy" },
	{ 0x73708729, "usb_register_driver" },
	{ 0x9f4cd1af, "usb_stor_CB_transport" },
	{ 0xa9e986af, "usb_stor_bulk_transfer_sg" },
	{ 0x42448789, "usb_stor_bulk_srb" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0436p0005d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p0005d020[0-8]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p0005d01*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp0105d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0781p0200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AFp0006d0100dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6A7360EEB811EEA233A6237");
