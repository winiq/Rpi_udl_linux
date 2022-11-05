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
	{ 0x95cc0f6b, "noop_llseek" },
	{ 0x95bcca6d, "serio_unregister_driver" },
	{ 0xc573a288, "__serio_register_driver" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xba7b3b54, "misc_register" },
	{ 0x6d16c104, "mutex_lock_killable" },
	{ 0x926375f7, "serio_open" },
	{ 0xadc9aed4, "get_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x5709453a, "serio_close" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xff0fc178, "misc_deregister" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xd68955c5, "fasync_helper" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb4d6d6bf, "kill_fasync" },
	{ 0x37a0cba, "kfree" },
	{ 0x81822a88, "put_device" },
};

MODULE_INFO(depends, "serio");

MODULE_ALIAS("serio:ty01pr*id*ex*");
MODULE_ALIAS("serio:ty06pr*id*ex*");

MODULE_INFO(srcversion, "2848635162A92E0C1D3F3BA");
