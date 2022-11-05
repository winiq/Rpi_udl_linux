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
	{ 0x9a1dfd65, "strpbrk" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x349cba85, "strchr" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x98cf60b3, "strlen" },
	{ 0x5e7f4920, "snd_pcm_format_set_silence" },
	{ 0x83ef09b3, "snd_pcm_period_elapsed" },
	{ 0x273c3eb1, "snd_pcm_stop_xrun" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x3256de71, "snd_devm_card_new" },
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdebf2c8b, "platform_device_register_full" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd56699f0, "snd_pcm_hw_constraint_integer" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6d6556e5, "snd_timer_instance_free" },
	{ 0x52bfd181, "param_ops_charp" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x4e727df3, "snd_pcm_set_managed_buffer_all" },
	{ 0xaa6237eb, "snd_timer_instance_new" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x27984a03, "snd_pcm_set_ops" },
	{ 0xdd0f4668, "snd_ctl_notify" },
	{ 0x3971b4df, "snd_ecards_limit" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xeeb8e6b5, "platform_device_unregister" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xb2351ad2, "devm_kfree" },
	{ 0xeaf193c9, "snd_ctl_boolean_mono_info" },
	{ 0xad5e186a, "snd_timer_start" },
	{ 0x93840ffa, "snd_pcm_hw_rule_add" },
	{ 0x81822a88, "put_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb26f9c58, "snd_card_ref" },
	{ 0x9de9e1c6, "devm_kstrdup" },
	{ 0xaf14455d, "snd_timer_open" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0xffaa0890, "snd_ctl_new1" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0xfcbdd67c, "snd_card_rw_proc_new" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x54643076, "snd_timer_close" },
	{ 0x2f4ca2d0, "param_array_ops" },
	{ 0xa0118b13, "snd_pcm_stop" },
	{ 0xc2a2a05b, "snd_card_register" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x1b28395f, "snd_pcm_new" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8d0f80af, "snd_ctl_add" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0x77bc13a0, "strim" },
	{ 0x1cec650, "snd_timer_stop" },
};

MODULE_INFO(depends, "snd,snd-pcm,snd-timer");


MODULE_INFO(srcversion, "261BE7A2677B0E3D4AE4D5E");
