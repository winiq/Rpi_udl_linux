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
	{ 0xae102ed8, "_dev_info" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xf7131c54, "power_supply_powers" },
	{ 0xf176f8cc, "devm_power_supply_register" },
	{ 0x3966fdae, "input_mt_init_slots" },
	{ 0xed5ea3d, "input_alloc_absinfo" },
	{ 0x40061ad3, "input_register_device" },
	{ 0x4492ff0e, "input_ff_create_memless" },
	{ 0xf0d251f7, "input_set_capability" },
	{ 0x74dd3474, "input_set_abs_params" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xb55ffa6f, "devm_device_add_group" },
	{ 0xcc1fe040, "hid_hw_open" },
	{ 0xc577beb3, "hid_hw_start" },
	{ 0xda39556f, "hid_open_report" },
	{ 0x28343fb6, "hid_hw_stop" },
	{ 0x2b27adba, "hid_hw_close" },
	{ 0xffb7c514, "ida_free" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8384871a, "power_supply_get_drvdata" },
	{ 0xec7a6102, "devm_kasprintf" },
	{ 0xb85da197, "devm_input_allocate_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xdfb45682, "input_mt_sync_frame" },
	{ 0x18503203, "input_mt_report_slot_state" },
	{ 0x5dae8ffa, "input_event" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe783e261, "sysfs_emit" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("hid:b0005g*v0000054Cp00000CE6");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000CE6");

MODULE_INFO(srcversion, "980BEAF44460E60E97C39B7");
