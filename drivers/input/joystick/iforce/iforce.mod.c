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
	{ 0xc5e74216, "release_resource" },
	{ 0x66405d10, "input_ff_create" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf3e0e1df, "allocate_resource" },
	{ 0x74dd3474, "input_set_abs_params" },
	{ 0x5dae8ffa, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x40061ad3, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0xc5933243, "input_free_device" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x4829a47e, "memcpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2e518b1f, "input_allocate_device" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "938E833D3C0A586D6CB3F83");
