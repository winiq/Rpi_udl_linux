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
	{ 0x95bcca6d, "serio_unregister_driver" },
	{ 0xc573a288, "__serio_register_driver" },
	{ 0xa8c3c1cf, "cec_register_adapter" },
	{ 0x4580431, "cec_delete_adapter" },
	{ 0x926375f7, "serio_open" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x54306ad7, "cec_allocate_adapter" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x5a921311, "strncmp" },
	{ 0x98cf60b3, "strlen" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x42a8b785, "cec_received_msg_ts" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0xde6e9836, "cec_transmit_attempt_done_ts" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x50cf7585, "hex2bin" },
	{ 0xa6257a2f, "complete" },
	{ 0xdd64e639, "strscpy" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x11089ac7, "_ctype" },
	{ 0x37a0cba, "kfree" },
	{ 0x5709453a, "serio_close" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xd09ca92f, "cec_unregister_adapter" },
	{ 0x3c12dfe, "cancel_work_sync" },
};

MODULE_INFO(depends, "serio,cec");

MODULE_ALIAS("serio:ty02pr41id*ex*");

MODULE_INFO(srcversion, "04ABF947BB6C5CC7357B563");
