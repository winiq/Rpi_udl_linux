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
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x44d8ff71, "w1_add_master_device" },
	{ 0xe02472ef, "usb_set_interface" },
	{ 0x5d7062fb, "usb_reset_configuration" },
	{ 0x8452bdbc, "usb_get_dev" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0x67fe2005, "usb_clear_halt" },
	{ 0x43e735d6, "usb_bulk_msg" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd5225981, "usb_interrupt_msg" },
	{ 0x92997ed8, "_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x4b9e8b64, "usb_put_dev" },
	{ 0x1cf2bd98, "w1_remove_master_device" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
};

MODULE_INFO(depends, "wire");

MODULE_ALIAS("usb:v04FAp2490d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7FE457C739A3C08A18D31F8");
