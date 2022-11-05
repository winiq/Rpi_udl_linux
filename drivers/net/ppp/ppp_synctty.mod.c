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
	{ 0x16383ff2, "tty_unregister_ldisc" },
	{ 0x7303ce54, "tty_register_ldisc" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x50509c19, "n_tty_ioctl_helper" },
	{ 0x3b30bbb8, "ppp_channel_index" },
	{ 0xb52ce0ea, "tty_mode_ioctl" },
	{ 0x14c81c2f, "ppp_unit_number" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb7377510, "skb_push" },
	{ 0x597c650c, "ppp_output_wakeup" },
	{ 0xc3e795ff, "ppp_input" },
	{ 0x439777eb, "ppp_input_error" },
	{ 0x62053f52, "skb_dequeue" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x5c34178d, "consume_skb" },
	{ 0x8518a4a6, "_raw_spin_trylock_bh" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x6a726bed, "skb_queue_purge" },
	{ 0xd3f8da99, "ppp_unregister_channel" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x9f76baf4, "_raw_write_unlock_irq" },
	{ 0x3aca0190, "_raw_write_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe22d1723, "skb_put" },
	{ 0x3ce35277, "tty_unthrottle" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe26e0a8a, "skb_queue_tail" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xa6257a2f, "complete" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x37a0cba, "kfree" },
	{ 0xf33c04f3, "ppp_register_channel" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
};

MODULE_INFO(depends, "ppp_generic");


MODULE_INFO(srcversion, "45B4C6434136C1F944A91BE");
