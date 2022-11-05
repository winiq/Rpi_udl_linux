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
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xe3c3ccfc, "gpio_to_desc" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x10c2f2cc, "ath_printk" },
	{ 0xdcb764ad, "memset" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x40fbe76a, "ath_hw_get_listen_time" },
	{ 0xf98605d5, "ath_regd_get_band_ctl" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x270b4c3a, "ath_hw_cycle_counters_update" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x65d71cbb, "ath_hw_setbssidmask" },
	{ 0xfe990052, "gpio_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6968fb56, "gpiod_set_raw_value" },
	{ 0x96848186, "scnprintf" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xc3300fd8, "gpiod_get_raw_value" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x9e7d6bd0, "__udelay" },
};

MODULE_INFO(depends, "ath");


MODULE_INFO(srcversion, "A5E54EFE9CCF9F3C7A4280B");
