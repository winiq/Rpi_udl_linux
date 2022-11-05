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
	{ 0x2453a8b0, "unregister_qdisc" },
	{ 0x28e76045, "register_qdisc" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb7377510, "skb_push" },
	{ 0x5c34178d, "consume_skb" },
	{ 0xb7e25bd9, "skb_realloc_headroom" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xd19fb83, "__qdisc_calculate_pkt_len" },
	{ 0x246f5241, "tcf_classify" },
	{ 0x4829a47e, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8f8d542f, "sockfd_lookup" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0xd367601c, "nla_put" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd5d1f4ff, "gnet_stats_copy_queue" },
	{ 0x5d9dcdab, "gnet_stats_copy_basic" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x4720dc7a, "tcf_block_get" },
	{ 0x289e48ea, "qdisc_create_dflt" },
	{ 0x34203793, "pfifo_qdisc_ops" },
	{ 0x9a977884, "noop_qdisc" },
	{ 0x3226a809, "qdisc_reset" },
	{ 0x92997ed8, "_printk" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x37a0cba, "kfree" },
	{ 0xa5c5220d, "fput" },
	{ 0x8f0c1804, "tcf_block_put" },
	{ 0x65ea6047, "qdisc_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A4FABA262B9A5786AC1E559");
