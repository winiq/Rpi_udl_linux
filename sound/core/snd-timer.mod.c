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
	{ 0xa24f23d8, "__request_module" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3a918325, "snd_register_device" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xf8f2a4eb, "snd_kill_fasync" },
	{ 0xf7a2cfc1, "stream_open" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x5be862ed, "snd_device_initialize" },
	{ 0xcc26711b, "no_llseek" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5af762f1, "snd_fasync_free" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0xc80ea389, "snd_device_new" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xe2a02885, "snd_unregister_device" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0x3971b4df, "snd_ecards_limit" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6587c97e, "module_put" },
	{ 0x81822a88, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xadc9aed4, "get_device" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc36db217, "snd_fasync_helper" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9a2e62da, "snd_info_free_entry" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x20be5d80, "dev_set_name" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x2f214be5, "snd_info_create_module_entry" },
	{ 0x9770d1d5, "snd_info_register" },
	{ 0x3f9f7d3b, "try_module_get" },
};

MODULE_INFO(depends, "snd");


MODULE_INFO(srcversion, "97311D7218B71D0AEA590D6");
