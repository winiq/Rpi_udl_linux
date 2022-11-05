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
	{ 0x65cf0b29, "put_pid" },
	{ 0x53b954a2, "up_read" },
	{ 0x3a918325, "snd_register_device" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x2f286539, "pid_vnr" },
	{ 0xf7a2cfc1, "stream_open" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x5be862ed, "snd_device_initialize" },
	{ 0xcc26711b, "no_llseek" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x6339b6d0, "snd_seq_device_load_drivers" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x668b19a1, "down_read" },
	{ 0x6d6556e5, "snd_timer_instance_free" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x91def1c, "snd_seq_autoload_exit" },
	{ 0xdcb764ad, "memset" },
	{ 0x9f76baf4, "_raw_write_unlock_irq" },
	{ 0xaa6237eb, "snd_timer_instance_new" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xe2a02885, "snd_unregister_device" },
	{ 0x3971b4df, "snd_ecards_limit" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5a921311, "strncmp" },
	{ 0x170b8dd6, "snd_timer_pause" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x599951e8, "snd_timer_resolution" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x6587c97e, "module_put" },
	{ 0xad5e186a, "snd_timer_start" },
	{ 0x81822a88, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xaf14455d, "snd_timer_open" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x3aca0190, "_raw_write_lock_irq" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x148653, "vsnprintf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x54643076, "snd_timer_close" },
	{ 0x65219496, "snd_seq_root" },
	{ 0x9a2e62da, "snd_info_free_entry" },
	{ 0x2f4ca2d0, "param_array_ops" },
	{ 0x4a3ea5c0, "snd_request_card" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x20be5d80, "dev_set_name" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x370a0736, "snd_seq_autoload_init" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2f214be5, "snd_info_create_module_entry" },
	{ 0x9770d1d5, "snd_info_register" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x3f9f7d3b, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd,snd-seq-device,snd-timer");


MODULE_INFO(srcversion, "5B5110797ADFD3D2090C4E0");
