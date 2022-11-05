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
	{ 0x53b954a2, "up_read" },
	{ 0x826655e4, "param_ops_int" },
	{ 0xb8273d0b, "__wake_up_sync" },
	{ 0x2b2e368c, "__mmap_lock_do_trace_released" },
	{ 0xbd628752, "__tracepoint_mmap_lock_start_locking" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x860e78d8, "__mmap_lock_do_trace_start_locking" },
	{ 0x668b19a1, "down_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdcb764ad, "memset" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x5efdd68b, "__tracepoint_mmap_lock_released" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xbe118c52, "__tracepoint_mmap_lock_acquire_returned" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x80fe4637, "__mmap_lock_do_trace_acquire_returned" },
	{ 0x92540fbf, "finish_wait" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B8E123CF7AE26AC142860FD");
