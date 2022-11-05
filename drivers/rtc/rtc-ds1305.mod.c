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
	{ 0xadcac529, "driver_unregister" },
	{ 0x70c6196b, "__spi_register_driver" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x6fdfb1a2, "devm_free_irq" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0x851372a5, "devm_rtc_nvmem_register" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x97adca0e, "__devm_rtc_register_device" },
	{ 0x4c2a2c82, "devm_rtc_allocate_device" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x52829b9d, "spi_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x9330d080, "rtc_update_irq" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x54f59995, "spi_write_then_read" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1E91A639DC82B8BD895AAF2");
