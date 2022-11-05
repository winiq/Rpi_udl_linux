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
	{ 0xbcb64e0, "tpm1_getcap" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xa84f4782, "tpm2_probe" },
	{ 0xe3270f1b, "freezing_slow_path" },
	{ 0x6a202a5c, "tpmm_chip_alloc" },
	{ 0xf8582c4b, "tpm_get_timeouts" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9437f779, "tpm_chip_stop" },
	{ 0x9eb2d139, "tpm_chip_register" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x6fdfb1a2, "devm_free_irq" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x6024f028, "tpm_calc_ordinal_duration" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x80bd2ec8, "tpm2_get_tpm_pt" },
	{ 0xedc03953, "iounmap" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xdd1834f0, "tpm_chip_start" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "tpm");


MODULE_INFO(srcversion, "FA8F7EE789279CEC788F527");
