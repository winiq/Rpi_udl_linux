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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0x65cf0b29, "put_pid" },
	{ 0x53b954a2, "up_read" },
	{ 0x3a918325, "snd_register_device" },
	{ 0xbe35380a, "snd_device_register" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x826655e4, "param_ops_int" },
	{ 0xc77fb9f2, "remap_vmalloc_range" },
	{ 0xea124bd1, "gcd" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0xc39b86f4, "snd_card_file_remove" },
	{ 0x9cf63bf6, "snd_device_free" },
	{ 0x2f286539, "pid_vnr" },
	{ 0xb3c451bd, "dma_mmap_attrs" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x54fea8bc, "snd_power_wait" },
	{ 0x5be862ed, "snd_device_initialize" },
	{ 0xeb44339a, "free_pages_exact" },
	{ 0xcc26711b, "no_llseek" },
	{ 0x89e1a87e, "snd_info_create_card_entry" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x91c1958d, "snd_ctl_register_ioctl_compat" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0xdbc06572, "of_gen_pool_get" },
	{ 0x60ba97c, "gen_pool_free_owner" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xe959743c, "dma_free_attrs" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x64522be7, "nonseekable_open" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x668b19a1, "down_read" },
	{ 0x140592da, "snd_ctl_unregister_ioctl" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xdcb764ad, "memset" },
	{ 0xc80ea389, "snd_device_new" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x5fc72f0e, "alloc_pages_exact" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc021fa2a, "snd_timer_new" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0xe2a02885, "snd_unregister_device" },
	{ 0xd68955c5, "fasync_helper" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x93c1e1f1, "__devres_alloc_node" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x9a88925a, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8f595b11, "snd_major" },
	{ 0xce807a25, "up_write" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0xa5c5220d, "fput" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x6fff261f, "__arch_clear_user" },
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
	{ 0xffaa0890, "snd_ctl_new1" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x7ba780fd, "devres_add" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x6e3dbefc, "snd_ctl_remove" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xdf0ca3f4, "cpu_latency_qos_request_active" },
	{ 0x9e6d79f8, "snd_info_get_str" },
	{ 0xae04012c, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x28afbb08, "cpu_latency_qos_add_request" },
	{ 0x13696b51, "remap_pfn_range" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9a2e62da, "snd_info_free_entry" },
	{ 0x657f69d0, "snd_timer_interrupt" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xb4d6d6bf, "kill_fasync" },
	{ 0xada31e57, "gen_pool_dma_alloc_align" },
	{ 0xdc5d6cd2, "snd_ctl_get_preferred_subdevice" },
	{ 0x5b787f46, "snd_timer_notify" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x68c38fa4, "vmalloc_to_page" },
	{ 0x8d0f80af, "snd_ctl_add" },
	{ 0x20be5d80, "dev_set_name" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x82d03f76, "param_ops_ulong" },
	{ 0x7dd97926, "snd_ctl_unregister_ioctl_compat" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2f214be5, "snd_info_create_module_entry" },
	{ 0x9770d1d5, "snd_info_register" },
	{ 0x3f9f7d3b, "try_module_get" },
	{ 0x45ce4a57, "dma_can_mmap" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x22ec5205, "cpu_latency_qos_remove_request" },
};

MODULE_INFO(depends, "snd,snd-timer");


MODULE_INFO(srcversion, "0DCC8EE4045D9E75E290CFF");
