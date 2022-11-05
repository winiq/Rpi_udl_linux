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
	{ 0xb92873bd, "param_ops_uint" },
	{ 0xcc26711b, "no_llseek" },
	{ 0xadcac529, "driver_unregister" },
	{ 0x265fe5e, "class_destroy" },
	{ 0x70c6196b, "__spi_register_driver" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xbad97937, "__class_create" },
	{ 0x6994a440, "__register_chrdev" },
	{ 0x62e9350e, "spi_setup" },
	{ 0x81822a88, "put_device" },
	{ 0xadc9aed4, "get_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdcb764ad, "memset" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x2bce416, "device_destroy" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x6d0b9e10, "acpi_match_device" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe38b0aff, "device_create" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xa81e214c, "is_acpi_device_node" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x52829b9d, "spi_sync" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf7a2cfc1, "stream_open" },
	{ 0x37a0cba, "kfree" },
	{ 0x88aeeff3, "spi_slave_abort" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4dfa8d4b, "mutex_lock" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:SPT0001:*");
MODULE_ALIAS("acpi*:SPT0002:*");
MODULE_ALIAS("acpi*:SPT0003:*");
MODULE_ALIAS("of:N*T*Crohm,dh2228fv");
MODULE_ALIAS("of:N*T*Crohm,dh2228fvC*");
MODULE_ALIAS("of:N*T*Clineartechnology,ltc2488");
MODULE_ALIAS("of:N*T*Clineartechnology,ltc2488C*");
MODULE_ALIAS("of:N*T*Csemtech,sx1301");
MODULE_ALIAS("of:N*T*Csemtech,sx1301C*");
MODULE_ALIAS("of:N*T*Clwn,bk4");
MODULE_ALIAS("of:N*T*Clwn,bk4C*");
MODULE_ALIAS("of:N*T*Cdh,dhcom-board");
MODULE_ALIAS("of:N*T*Cdh,dhcom-boardC*");
MODULE_ALIAS("of:N*T*Cmenlo,m53cpld");
MODULE_ALIAS("of:N*T*Cmenlo,m53cpldC*");
MODULE_ALIAS("of:N*T*Ccisco,spi-petra");
MODULE_ALIAS("of:N*T*Ccisco,spi-petraC*");
MODULE_ALIAS("of:N*T*Cmicron,spi-authenta");
MODULE_ALIAS("of:N*T*Cmicron,spi-authentaC*");
MODULE_ALIAS("spi:spidev");
MODULE_ALIAS("spi:dh2228fv");
MODULE_ALIAS("spi:ltc2488");
MODULE_ALIAS("spi:sx1301");
MODULE_ALIAS("spi:bk4");
MODULE_ALIAS("spi:dhcom-board");
MODULE_ALIAS("spi:m53cpld");
MODULE_ALIAS("spi:spi-petra");
MODULE_ALIAS("spi:spi-authenta");

MODULE_INFO(srcversion, "E858DEB3CE2881F7530CF3E");
