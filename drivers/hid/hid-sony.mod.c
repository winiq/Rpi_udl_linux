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
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x719251e9, "hid_unregister_driver" },
	{ 0xf9ce2f6b, "__hid_register_driver" },
	{ 0x5495392, "hid_debug" },
	{ 0x92997ed8, "_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x40ef4d51, "device_create_file" },
	{ 0xa5f5441b, "hid_validate_values" },
	{ 0xcc1fe040, "hid_hw_open" },
	{ 0xf7131c54, "power_supply_powers" },
	{ 0xf176f8cc, "devm_power_supply_register" },
	{ 0xec7a6102, "devm_kasprintf" },
	{ 0xf038e45, "devm_led_classdev_register_ext" },
	{ 0x4492ff0e, "input_ff_create_memless" },
	{ 0xf0d251f7, "input_set_capability" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x9bbfb761, "__hid_request" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xba1aa9c7, "device_remove_file" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xffb7c514, "ida_free" },
	{ 0x2b27adba, "hid_hw_close" },
	{ 0x3966fdae, "input_mt_init_slots" },
	{ 0xdfb45682, "input_mt_sync_frame" },
	{ 0x18503203, "input_mt_report_slot_state" },
	{ 0x5dae8ffa, "input_event" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0x28343fb6, "hid_hw_stop" },
	{ 0x7b3ae27f, "usb_hid_driver" },
	{ 0xc577beb3, "hid_hw_start" },
	{ 0xda39556f, "hid_open_report" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8384871a, "power_supply_get_drvdata" },
	{ 0xed5ea3d, "input_alloc_absinfo" },
	{ 0x74dd3474, "input_set_abs_params" },
	{ 0x40061ad3, "input_register_device" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb85da197, "devm_input_allocate_device" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x37a0cba, "kfree" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xa6c96402, "_dev_err" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("hid:b0003g*v0000054Cp00000268");
MODULE_ALIAS("hid:b0003g*v0000054Cp0000042F");
MODULE_ALIAS("hid:b0005g*v0000054Cp0000042F");
MODULE_ALIAS("hid:b0003g*v0000054Cp000003D5");
MODULE_ALIAS("hid:b0005g*v0000054Cp000003D5");
MODULE_ALIAS("hid:b0005g*v0000054Cp00000268");
MODULE_ALIAS("hid:b0003g*v0000054Cp0000024B");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000374");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000002");
MODULE_ALIAS("hid:b0003g*v0000054Cp00001000");
MODULE_ALIAS("hid:b0005g*v0000054Cp00000306");
MODULE_ALIAS("hid:b0005g*v0000046Dp00000306");
MODULE_ALIAS("hid:b0005g*v00000609p00000306");
MODULE_ALIAS("hid:b0003g*v0000054Cp000005C4");
MODULE_ALIAS("hid:b0005g*v0000054Cp000005C4");
MODULE_ALIAS("hid:b0003g*v0000054Cp000009CC");
MODULE_ALIAS("hid:b0005g*v0000054Cp000009CC");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000BA0");
MODULE_ALIAS("hid:b0003g*v00001345p00003008");
MODULE_ALIAS("hid:b0005g*v00000609p00000368");
MODULE_ALIAS("hid:b0005g*v00000609p00000369");
MODULE_ALIAS("hid:b0003g*v000012BAp0000074B");
MODULE_ALIAS("hid:b0003g*v00001430p0000474C");
MODULE_ALIAS("hid:b0003g*v000012BAp00000100");
MODULE_ALIAS("hid:b0003g*v00001430p000007BB");

MODULE_INFO(srcversion, "322E25A2FB645C1FA5FBB32");
