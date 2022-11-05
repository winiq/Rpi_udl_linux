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
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x98cf60b3, "strlen" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc9e462c2, "dlm_posix_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x647d6170, "dlm_lock" },
	{ 0x15c950ec, "dlm_posix_get" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xba7b3b54, "misc_register" },
	{ 0xdcb764ad, "memset" },
	{ 0x9f64a537, "default_llseek" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x5a921311, "strncmp" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd16e7e52, "ocfs2_stack_glue_unregister" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf327f1d2, "ocfs2_stack_glue_register" },
	{ 0xd0c05159, "emergency_restart" },
	{ 0xeeaa94b5, "dlm_posix_unlock" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0xcf9f3328, "dlm_release_lockspace" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x4b62826c, "dlm_unlock" },
	{ 0xcd224e1d, "dlm_new_lockspace" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0xa6257a2f, "complete" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xff0fc178, "misc_deregister" },
};

MODULE_INFO(depends, "dlm,ocfs2_stackglue");


MODULE_INFO(srcversion, "C4B0FCAD915E52B12B31C13");
