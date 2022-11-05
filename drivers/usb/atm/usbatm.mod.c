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
	{ 0x26cc73c3, "complete_and_exit" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xcd5e5ea9, "send_sig" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9c0e02f4, "atm_charge" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe3a3079a, "vcc_release_async" },
	{ 0xe929fd4a, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0xdcbcc479, "usb_string" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xda9ae056, "atm_dev_register" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xe26e0a8a, "skb_queue_tail" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0x8452bdbc, "usb_get_dev" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x4b9e8b64, "usb_put_dev" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x7d8caeb9, "wake_up_process" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x87b302ea, "atm_dev_deregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x4df02057, "crc32_be" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x96848186, "scnprintf" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x62053f52, "skb_dequeue" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb92873bd, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0x37804aa, "usb_alloc_urb" },
};

MODULE_INFO(depends, "atm");


MODULE_INFO(srcversion, "B3E2AC6A70CFA0046593E23");
