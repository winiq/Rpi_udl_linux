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
	{ 0x2d3385d3, "system_wq" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x65cf0b29, "put_pid" },
	{ 0x3a918325, "snd_register_device" },
	{ 0xbe35380a, "snd_device_register" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x826655e4, "param_ops_int" },
	{ 0xc39b86f4, "snd_card_file_remove" },
	{ 0x2f286539, "pid_vnr" },
	{ 0xf7a2cfc1, "stream_open" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x5be862ed, "snd_device_initialize" },
	{ 0xcc26711b, "no_llseek" },
	{ 0x89e1a87e, "snd_info_create_card_entry" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x91c1958d, "snd_ctl_register_ioctl_compat" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x140592da, "snd_ctl_unregister_ioctl" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xc80ea389, "snd_device_new" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0xe2a02885, "snd_unregister_device" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8f595b11, "snd_major" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x6587c97e, "module_put" },
	{ 0x89b322be, "snd_card_file_add" },
	{ 0x8dfc76, "snd_ctl_register_ioctl" },
	{ 0x81822a88, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0xc283bcaa, "snd_register_oss_device" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc6d45488, "snd_unregister_oss_device" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9a2e62da, "snd_info_free_entry" },
	{ 0x2f4ca2d0, "param_array_ops" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xdc5d6cd2, "snd_ctl_get_preferred_subdevice" },
	{ 0x8805e0c2, "snd_seq_device_new" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x20be5d80, "dev_set_name" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x7dd97926, "snd_ctl_unregister_ioctl_compat" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x9770d1d5, "snd_info_register" },
	{ 0x3f9f7d3b, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd,snd-seq-device");


MODULE_INFO(srcversion, "A50824ED0FDF7C86896B5AD");
