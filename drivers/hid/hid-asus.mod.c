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
	{ 0x719251e9, "hid_unregister_driver" },
	{ 0xf9ce2f6b, "__hid_register_driver" },
	{ 0x92997ed8, "_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xdfb45682, "input_mt_sync_frame" },
	{ 0x18503203, "input_mt_report_slot_state" },
	{ 0xd82eb13c, "power_supply_changed" },
	{ 0x5dae8ffa, "input_event" },
	{ 0x78ddb76b, "dmi_match" },
	{ 0xc577beb3, "hid_hw_start" },
	{ 0xda39556f, "hid_open_report" },
	{ 0xf7131c54, "power_supply_powers" },
	{ 0xf176f8cc, "devm_power_supply_register" },
	{ 0xec7a6102, "devm_kasprintf" },
	{ 0x7b3ae27f, "usb_hid_driver" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8384871a, "power_supply_get_drvdata" },
	{ 0x28343fb6, "hid_hw_stop" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x4829a47e, "memcpy" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xb2351ad2, "devm_kfree" },
	{ 0xf0d251f7, "input_set_capability" },
	{ 0xf038e45, "devm_led_classdev_register_ext" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x3966fdae, "input_mt_init_slots" },
	{ 0xed5ea3d, "input_alloc_absinfo" },
	{ 0x74dd3474, "input_set_abs_params" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x66b4cc41, "kmemdup" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0018g*v00000B05p00008585");
MODULE_ALIAS("hid:b0018g*v00000B05p00000101");
MODULE_ALIAS("hid:b0003g*v00000B05p00001854");
MODULE_ALIAS("hid:b0003g*v00000B05p00001837");
MODULE_ALIAS("hid:b0003g*v00000B05p00001822");
MODULE_ALIAS("hid:b0003g*v00000B05p00001869");
MODULE_ALIAS("hid:b0003g*v00000B05p00001866");
MODULE_ALIAS("hid:b0003g*v00000B05p000019B6");
MODULE_ALIAS("hid:b0003g*v00000B05p0000196B");
MODULE_ALIAS("hid:b0003g*v00000B05p000017E0");
MODULE_ALIAS("hid:b0003g*v00000B05p00001807");
MODULE_ALIAS("hid:b0003g*v000004F2p00001125");
MODULE_ALIAS("hid:b0003g*v0000062Ap00005110");
MODULE_ALIAS("hid:b0003g*v00000C45p00005112");
MODULE_ALIAS("hid:b0005g*v00000B05p00008502");
MODULE_ALIAS("hid:b0003g*v0000048Dp0000CE50");
MODULE_ALIAS("hid:b0003g0001v00000B05p0000183D");

MODULE_INFO(srcversion, "C8F42FEF082EDA0096A64DF");
